/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allam <allam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:57:25 by allam             #+#    #+#             */
/*   Updated: 2023/07/09 19:23:36 by allam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/types.h>
# include "../libft/libft.h"

//bits	 : number of bits received
//flag	 : 1 if length was received, 0 otherwise
//data	 : char received or length received
//message: payload assembled in this array
//i		 : counter to navigate through message array
typedef struct s_frame
{
	int		bits;
	int		data;
	int		flag;
	char	*message;
	int		i;
}			t_frame;

void	link_signals_to_actions(struct sigaction *sa);
void	send_length(pid_t pid, int length);
void	send_character(pid_t pid, char c);
void	send_bit(pid_t pid, char bit, char closed_loop_flag);
#endif
