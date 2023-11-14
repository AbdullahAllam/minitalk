/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:30:27 by abali             #+#    #+#             */
/*   Updated: 2023/01/19 11:32:23 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

/*void
	ft_pputchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
*/
void
	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
#include <fcntl.h>
int main()
{
    int fd;
    fd = open("text", O_WRONLY);
    //ft_putstr_fd("hi",fd);
    return (0);
}
*/