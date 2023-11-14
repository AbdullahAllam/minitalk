/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:22:32 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:49:11 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int
	ft_isalpha(int test)
{
	if (test >= 'a' && test <= 'z')
		return (1);
	else if (test >= 'A' && test <= 'Z')
		return (1);
	else
	{
		return (0);
	}
}
/* #include <unistd.h>
#include <stdio.h>    
int main()
{
    char x;

    x = ' ';
    printf("%d",ft_isalpha(x));
}*/
