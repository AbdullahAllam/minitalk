/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:32:52 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:25:37 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int
	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	i = 0;
	while (ss1[i] && ss2[i] && i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	if (i != n)
		return (ss1[i] - ss2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char array1[] = "";
	char array2[] = "hellO";
	char array1a[] = "hellO";
    char array2a[] = "";
	unsigned int size = 5;
	printf("%d", ft_strncmp(array1, array2,size));
	printf("%c",'\n');
	printf("%d", strncmp(array1a, array2a,size));
	return (0);
}*/
