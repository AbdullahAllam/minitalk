/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:25:40 by abali             #+#    #+#             */
/*   Updated: 2023/01/17 20:36:07 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	get_length(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*s1;
	int				size;

	if (!s || !f)
		return (NULL);
	s1 = (char *) s;
	size = get_length(s1) + 1;
	i = 0;
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = (*f)(i, s1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
    char *s = "hello";
    printf("%s",ft_strmapi(s,ft_tolower));
    return (0);
}*/
