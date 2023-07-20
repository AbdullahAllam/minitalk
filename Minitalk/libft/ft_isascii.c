/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:23:03 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 11:50:50 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int
	ft_isascii(int test)
{
	if (test >= 0 && test <= 127)
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

    x = '?';
    printf("%d\n",ft_isascii(x));
    printf("%d",isascii(x));

}*/
