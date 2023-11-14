/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:48:03 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 12:02:09 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void
	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char		*ptr;
	size_t		i;
	const char	*p;

	if (!dest && !src)
		return (NULL);
	ptr = (char *) dest;
	i = 0;
	p = (const char *) src;
	while (i < n)
	{
		ptr[i] = p[i];
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
  char x[20] = "12345";
  char y[20] = "6789";

  printf("%s\n",ft_memcpy(y, x, 3));
  printf("%s",memcpy(y, x, 3));

  return 0;
}
*/
