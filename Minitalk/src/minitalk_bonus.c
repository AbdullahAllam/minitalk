/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allam <allam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:57:25 by allam             #+#    #+#             */
/*   Updated: 2023/07/09 19:25:07 by allam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk_bonus.h"

void	link_signals_to_actions(struct sigaction *sa)
{
	if (sigaction(SIGUSR1, sa, NULL) < 0)
	{
		ft_putendl_fd("ERROR: can't link SIGUSR1", 1);
		exit(1);
	}
	if (sigaction(SIGUSR2, sa, NULL) < 0)
	{
		ft_putendl_fd("ERROR: can't link SIGUSR2", 1);
		exit(1);
	}
	ft_putendl_fd("Signals Configured", 1);
}

void	send_length(pid_t pid, int length)
{
	int		bitshift;
	char	bit;

	bitshift = (sizeof(int) * 8) - 1;
	while (bitshift >= 0)
	{
		bit = (length >> bitshift) & 1;
		send_bit(pid, bit, 1);
		bitshift--;
	}
}

void	send_character(pid_t pid, char c)
{
	int		shift;
	char	bit;

	shift = (sizeof(char) * 8) - 1;
	while (shift >= 0)
	{
		bit = (c >> shift) & 1;
		send_bit(pid, bit, 1);
		shift--;
	}
}

void	send_bit(pid_t pid, char bit, char closed_loop_flag)
{
	if (bit == 0)
	{
		if (kill(pid, SIGUSR1) < 0)
		{
			ft_putstr_fd("ERROR: Can't trigger the process with SIG1", 1);
			exit(1);
		}
	}
	else if (bit == 1)
	{
		if (kill(pid, SIGUSR2) < 0)
		{
			ft_putstr_fd("ERROR: Can't trigger the process with SIG2", 1);
			exit(1);
		}
	}
	if (closed_loop_flag == 1)
		pause();
}
