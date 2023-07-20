/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:23:52 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:54:05 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int
	ft_isprint(int test)
{
	if (test >= 32 && test <= 126)
		return (1);
	else
	{
		return (0);
	}
}
/*#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
    int x;

    x = 3333;
    printf("%d\n",ft_isprint(x));
    printf("%d",isprint(x));

}*/
