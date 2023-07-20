/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allam <allam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:57:25 by allam             #+#    #+#             */
/*   Updated: 2023/07/09 19:23:46 by allam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

static void	message_finished(
	t_frame *frame, pid_t client_pid)
{
	if (frame->bits == 8 && frame->flag == 1)
	{
		frame->message[frame->i] = frame->data;
		//ft_putendl_fd(frame->message, 1);
		frame->i++;
		if (frame->data == '\0')
		{
			ft_putstr_fd("\e[92mReceived message = [", 1);
			ft_putstr_fd(frame->message, 1);
			ft_putstr_fd("]\n\e[0m", 1);
			free(frame->message);
			frame->message = NULL;
			frame->flag = 0;
			frame->i = 0;
			// send_bit(client_pid, 1, 0);
		}
		frame->bits = 0;
	}
}

static void	length_finished(t_frame *frame)
{
	if (frame->bits == sizeof(int) * 8 && frame->flag == 0)
	{
		frame->flag = 1;
		ft_putnbr_fd(frame->data, 1);
		ft_putendl_fd(" is the length I received", 1);
		frame->message = ft_calloc(frame->data + 1, sizeof(char));
		if (frame->message == NULL)
		{
			ft_putstr_fd("\e[31m## error - ft_calloc() ##\n\e[0m", 1);
			exit(1);
		}
		frame->message[frame->data] = '\0';
		frame->bits = 0;
	}
}

static void	server_handler(int num, siginfo_t *info, void *context)
{
	static t_frame	frame;

	if (num == SIGUSR1)
		ft_putendl_fd("1", 1);
	if (num == SIGUSR2)
		ft_putendl_fd("2", 1);
	usleep(50);
	(void)context;
	if (frame.bits == 0)
		frame.data = 0;
	if (num == SIGUSR2 && frame.flag == 0)
		frame.data |= 1 << (((sizeof(int) * 8) - 1) - frame.bits);
	else if (num == SIGUSR2 && frame.flag == 1)
		frame.data |= 1 << (((sizeof(char) * 8) - 1) - frame.bits);
	frame.bits++;
	length_finished(&frame);
	message_finished(&frame, info->si_pid);
	// send_bit(info->si_pid, 0, 0);
}

int	main(int argc, char *argv[])
{
	struct sigaction	s_server;

	(void) argv;
	if (argc > 1)
	{
		ft_putendl_fd("Wrong server initialization", 1);
		exit(1);
	}
	sigemptyset(&s_server.sa_mask);
	s_server.sa_sigaction = server_handler;
	s_server.sa_flags = SA_SIGINFO | SA_RESTART;
	link_signals_to_actions(&s_server);
	ft_putstr_fd("My PID is ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
	{
		pause();
	}
	return (0);
}
