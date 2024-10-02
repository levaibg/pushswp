/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list-utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:01:54 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/30 23:48:20 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
		new->next = *lst;
		*lst = new;
}

t_stack	ft_lstlast(t_stack *lst)
{
	while(lst->next)
		lst = lst->next;
	return(lst);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	last = ft_lstlast(*lst);
	if (last == NULL)
		*lst = new;
	else
		last->next = new;
}

