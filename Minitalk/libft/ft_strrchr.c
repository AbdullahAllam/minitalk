/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:06:31 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:21:24 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char*
	ft_strrchr(const char *s, int c)
{
	char	*ss;
	int		size;

	ss = (char *) s;
	size = 0;
	while (s[size])
		size++;
	while (size >= 0)
	{
		if (ss[size] == (char) c)
			return (&ss[size]);
		size--;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char x[10] = "ABC-GG-F0";
    printf("%s\n",ft_strrchr(x,'\0'));
    printf("%s",strrchr(x,'\0'));

    return 0;
}*/