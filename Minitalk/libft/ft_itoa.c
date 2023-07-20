/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:48:56 by abali             #+#    #+#             */
/*   Updated: 2023/01/17 18:08:58 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int
	ft_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
	{
		size = size + 2;
		n = 147483648;
	}
	if (n < 0)
	{
		size++;
		n = n * -1;
	}
	while (n >= 10)
	{
		size++;
		n = n / 10;
	}
	size++;
	return (size);
}

int	modify_n(int n)
{
	int	x;

	x = n;
	if (n == -2147483648)
		x = 147483648;
	else if (n < 0)
		x = -1 * n;
	return (x);
}

char	*first_byte(char *p, int n)
{
	if (n == -2147483648)
	{
		p[0] = '-';
		p[1] = '2';
	}
	else if (n < 0)
		p[0] = '-';
	return (p);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;

	size = ft_size(n);
	ptr = (char *)malloc(1 + (size * sizeof(char)));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	ptr = first_byte(ptr, n);
	n = modify_n(n);
	while (n >= 10)
	{
		ptr[--size] = n % 10 + '0';
		n = n / 10;
	}
	ptr[--size] = n + '0';
	return (ptr);
}
/*
int main()
{
    int x = -2147483648;
    printf("%s",ft_itoa(x));
    return (0);
}
*/