/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:18:31 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:30:10 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char
	*ft_strdup(const char *src)
{
	char	*copy;
	int		size;

	size = 0;
	while (src[size])
		size++;
	size = size + 1;
	copy = malloc(sizeof(char) * size);
	if (!copy)
		return (NULL);
	size = 0;
	while (src[size])
	{
		copy[size] = src[size];
		size++;
	}
	copy[size] = '\0';
	return (copy);
}
/*
int main()
{
	char src[] = "hello";

	printf("%s", ft_strdup(src));
	return (0);
}*/
