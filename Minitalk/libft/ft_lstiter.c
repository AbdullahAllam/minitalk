/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:40:49 by abali             #+#    #+#             */
/*   Updated: 2023/01/22 15:41:56 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*dummy;

	if (!lst || !f || ft_lstsize(lst) == 0)
		return ;
	dummy = lst;
	while (dummy)
	{
		lst = dummy;
		f(lst->content);
		dummy = lst->next;
	}
}
