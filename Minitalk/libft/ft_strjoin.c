/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:54:02 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 12:57:51 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int
	f_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char
	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (s1 && s2)
	{
		i = 0;
		j = 0;
		ptr = malloc((f_length((char *)s1) + f_length((char *)s2) + 1));
		if (!ptr)
			return (NULL);
		while ((char)s1[i])
		{
			ptr[i] = (char)s1[i];
			i++;
		}
		while ((char)s2[j])
		{
			ptr[i + j] = (char)s2[j];
			j++;
		}
		ptr[i + j] = '\0';
		return (ptr);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%s",ft_strjoin("where is my ", NULL));
}
*/