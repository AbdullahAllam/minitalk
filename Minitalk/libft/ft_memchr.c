/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:01:32 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:57:34 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void
	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	i = 0;
	ss = (unsigned char *) s;
	while (i < n)
	{
		if (ss[i] == (unsigned char) c)
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
  char x[20] = "31234567389";
  printf("%s\n",ft_memchr(x, 'a',5));
  printf("%s",memchr(x, '3',5));
  return (0);
}*/
