/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:24:23 by abali             #+#    #+#             */
/*   Updated: 2023/01/10 13:24:25 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

size_t
	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}
/*
#include <unistd.h>
void
	putchar(char a)
{
	write(1, &a, 1);
}

int main()
{
int	counter;

char *str;
str ="hell";
counter = ft_strlen(str);
putchar((counter %  10) + '0');
return (0);
} */
