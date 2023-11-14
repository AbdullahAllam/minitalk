/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:15:55 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:14:37 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void
	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
  char x[20] ="gggggggggggggg";
  printf("%s",ft_bzero(x, 0));
  return 0;
}*/
