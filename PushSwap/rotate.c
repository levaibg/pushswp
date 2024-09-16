/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:46:52 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/12 21:09:03 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"


void	ra(t_pushswap *ps)
{
	t_stack *tmp;
	t_stack *last;
	if(ps->a == NULL || ps == NULL)
		return ;
	tmp = ps->a;
	ps->a = ps->a -> next;
	last = ft_lstlast(ps->a);
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("ra");
}

void	rb(t_pushswap *ps)
{
	t_stack *tmp;
	t_stack *last;
	if(ps->b == NULL || ps == NULL)
		return ;
	tmp = ps->b;
	ps->b = ps->b -> next;
	last = ft_lstlast(ps->b);
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("rb");
}

void rr(t_pushswap *ps)
{
	ra(ps);
	rb(ps);
	ft_printf("rr");
}