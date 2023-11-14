/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:18 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:46:55 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int
	ft_isalnum(int test)
{
	if ((test >= 'a' && test <= 'z')
		|| (test >= 'A' && test <= 'Z') || (test >= '0' && test <= '9'))
		return (1);
	else
	{
		return (0);
	}
}
/*#include <unistd.h>
#include <stdio.h>    
int main()
{
    char x;

    x = 'S';
    printf("%d",ft_isalnum(x));
}*/
