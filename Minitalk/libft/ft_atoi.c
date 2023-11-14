/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:36:13 by abali             #+#    #+#             */
/*   Updated: 2023/01/11 17:36:17 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	checknumber(int number, int i, const char *str)
{
	if (number <= 0)
	{
		ft_putendl_fd("Wrong PID Number", 1);
		exit(1);
	}
	if (str[i] != '\0')
	{
		ft_putendl_fd("Wrong PID Number", 1);
		exit(1);
	}
}

int
	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = sign * -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	number = number * sign;
	checknumber(number, i, str);
	return (number);
}
/*#include <stdio.h>
int main()
{
	char array[] = "35s4";
	printf("%d", ft_atoi(array));
	return (0);
}*/
