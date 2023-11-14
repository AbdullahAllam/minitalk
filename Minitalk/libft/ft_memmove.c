/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allam <allam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:01:16 by abali             #+#    #+#             */
/*   Updated: 2023/06/10 19:49:53 by allam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void
	reduce(const char *s, char *d, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

void
	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	d = (char *) dest;
	s = (const char *) src;
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		reduce(s, d, len);
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
  char x[20] = "gghhhh";
  char y[20] = "ddfffffffff";
  printf("%s\n",ft_memmove(x+3, x, 4));
  char xx[20] = "gghhhh";
  char yy[20] = "ddfffffffff";
  printf("%s",memmove(xx+3, xx, 4));

  return 0;
}
*/
