/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:32:45 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:27:10 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t
	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	srcsize;
	size_t	j;

	srcsize = 0;
	j = 0;
	while (src[srcsize])
		srcsize++;
	if (size != 0)
	{
		while (src[j] && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (srcsize);
}
/*
#include <unistd.h>
#include <string.h> 
int main()
{
	char array[] = "abcd";
	char dest[5];
	unsigned int size = 5;
	printf("%d,%c,%s", ft_strlcpy(dest, array, size), dest[4],dest);
    printf("%lu,%c,%s", strlcpy(dest, array, size), dest[4],dest);
			}*/
