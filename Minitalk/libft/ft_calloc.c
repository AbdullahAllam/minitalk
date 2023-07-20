/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allam <allam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:06:37 by abali             #+#    #+#             */
/*   Updated: 2023/06/10 19:51:23 by allam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdint.h>
#include "libft.h"

void
	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	if (count * size > SIZE_MAX
		|| (count == SIZE_MAX && size == SIZE_MAX))
		return (NULL);
	total = size * count;
	ptr = malloc(total);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
     #include <stdio.h>
     int main()
     {
         printf("%s",ft_calloc(5,4));
         return 0;
     }
*/