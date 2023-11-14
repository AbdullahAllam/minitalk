/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allam <allam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:57:25 by allam          #+#    #+#             */
/*   Updated: 2023/06/26 19:28:32 by allam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

static void	client_handler(int sig)
{
	usleep(60);
	(void) sig;
	if (sig == SIGUSR1)
		ft_putendl_fd("ACK signal from server", 1);
	else if (sig == SIGUSR2)
	{
		ft_putendl_fd("ACK signal from server", 1);
		ft_putendl_fd("\e[92m > End signal from server\n\e[0m", 1);
		exit(0);
	}
}

static void	send_message(int server_pid, char *str)
{
	int	i;

	i = 0;
	{
		ft_putstr_fd("\e[92mSending length = [", 1);
		ft_putnbr_fd(ft_strlen(str), 1);
		ft_putstr_fd("]\n\e[0m", 1);
		send_length(server_pid, ft_strlen(str));
		ft_putstr_fd("\e[92mSending message \e[0m", 1);
		ft_putendl_fd(str, 1);
		while (str[i] != '\0')
			send_character(server_pid, str[i++]);
		ft_putstr_fd("\e[92mSending null string terminator\n\e[0m", 1);
		send_character(server_pid, '\0');
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	s_client;

	if (argc != 3)
	{
		ft_putstr_fd("ERROR: Wrong number of arguments", 1);
		ft_putstr_fd(
			"Syntax: \e[92m./client <server PID> <message>\n\e[0m", 1);
		return (1);
	}
	else if (kill(ft_atoi(argv[1]), 0) < 0)
	{
		ft_putstr_fd("ERROR: Cant reach server", 1);
		return (1);
	}
	sigemptyset(&s_client.sa_mask);
	s_client.sa_flags = SA_RESTART;
	s_client.sa_handler = client_handler;
	link_signals_to_actions(&s_client);
	ft_putnbr_fd(getpid(), 1);
	ft_putendl_fd(" is my PID ", 1);
	send_message(ft_atoi(argv[1]), argv[2]);
	return (0);
}
