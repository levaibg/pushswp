/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:10:22 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/05 04:27:41 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_max(t_stack *lst)
{
	long	litle;
	t_stack	*bigstack;

	litle = LONG_MIN;
	while (lst)
	{
		if (lst->value > litle)
		{
			litle = lst->value;
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
		if (lst->value < big)
		{
			big = lst->value;
			lowstack = lst;
		}
		lst = lst->next;
	}
	return (lowstack);
}

int len_stack(t_stack *lst)
{
	int i;

	i = 0;
	while(lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return(i);
}

void	sort3(t_stack **lst)
{
	t_stack *tmp;

	tmp = ft_max(*lst);
	if((*lst) == tmp)
		ra(lst, 0);
	else if((*lst)->next == tmp)
		reversra(lst, 0);
	if(ifsorted(*lst) == 2)
		sa(*lst, 0);
}