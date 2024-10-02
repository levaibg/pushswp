/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:10:22 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/02 19:19:50 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack	*ft_max(t_stack *lst)
{
	long	litle;
	t_stack	*bigstack;

	litle = LONG_MIN;
	while (lst)
	{
		if (lst->data > litle)
		{
			litle = lst->data;
			bigstack = lst;
		}
		lst = lst->next;
	}
	return (bigstack);
}

t_stack	*ft_min(t_stack *lst)
{
	long	big;
	t_stack	*lowstack;

	big = LONG_MAX;
	while (lst)
	{
		if (lst->data < big)
		{
			big = lst->data;
			lowstack = lst;
		}
		lst = lst->next;
	}
	return (lowstack);
}