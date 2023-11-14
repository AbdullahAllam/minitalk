/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:09:25 by abali             #+#    #+#             */
/*   Updated: 2023/01/19 14:10:28 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

int
	ft_lstsize(t_list *lst)
{
	t_list	*dummy;
	int		counter;

	counter = 0;
	if (!lst)
		return (counter);
	dummy = lst;
	while (dummy != NULL)
	{
		dummy = dummy->next;
		counter++;
	}
	return (counter);
}
