/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:23:35 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:52:14 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int
	ft_isdigit(int test)
{
	if (test >= '0' && test <= '9')
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

    x = 'f';
    printf("%d",ft_isdigit(x));
}*/
