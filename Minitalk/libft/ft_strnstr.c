/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:34:16 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:24:02 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int
	ft_strleeen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

char *
	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if ((len == 0 && haystack == NULL))
		return (NULL);
	if (ft_strleeen(haystack) == 0 && ft_strleeen(needle) == 0)
		return ((char *)needle);
	ptr = (char *) haystack;
	i = 0;
	if ((ft_strleeen(needle) == 0 && needle != NULL))
		return (ptr);
	while (ptr[i] && i < len)
	{
		j = 0;
		while (i + j < len && ptr[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&ptr[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = "aaabcabcd";
	char b[] = "aabc";
	char * empty = (char*)"";
	printf("%s\n",strnstr(NULL, "fake", 0));
	printf("%s\n",ft_strnstr(NULL, "fake", 0));
	return 0;
}
*/