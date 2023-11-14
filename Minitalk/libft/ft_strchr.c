/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:03:33 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:32:58 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char*
	ft_strchr(const char *s, int c)
{
	char	*ss;
	int		size;
	int		i;

	ss = (char *) s;
	i = 0;
	size = 0;
	while (s[size])
		size++;
	while (i <= size)
	{
		if (ss[i] == (char) c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char x[] = "tripouille";
    printf("%s\n",ft_strchr(x, 't' + 256));
	printf("%s\n",strchr(x, 't' + 256));
    return 0;
}
*/