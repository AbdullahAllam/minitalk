/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:00:55 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:34:36 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void
	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) dest;
	i = 0;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
  char x[20];
  printf("%s",ft_memset(x, 55, 3));
  return 0;
}*/
