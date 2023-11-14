/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:08:57 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:29:32 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t
	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	destsize;
	size_t	j;

	if ((!src || !dest) && dstsize == 0)
		return ((size_t) NULL);
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	j = 0;
	if (dstsize < destsize + 1 || dstsize == 0)
		return (srcsize + dstsize);
	while (src[j] && (destsize + 1 + j) < dstsize)
	{
		dest[destsize + j] = src[j];
		j++;
	}
	dest[destsize + j] = '\0';
	return (srcsize + destsize);
}
/*
#include <unistd.h>
#include <string.h> 
#include <stdio.h>
int main()
{
	unsigned int size = 20;
    array = "abcd";
	dest = "hello" ;
	printf("%zu\n",ft_strlcat(dest, array, size));
    printf("%s\n",dest);

    char src[] = "apple";
	char dest[] = "how" ;
    //strlcat(dest, src, size);
    printf("%zu | %s", ft_strlcat(dest, src, size),dest);
    return(0);    


}
*/
