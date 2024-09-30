/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:46:52 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/30 01:35:00 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"


void	ra(t_pushswap *ps)
{
	t_stack *tmp;
	t_stack *last;
	if(ps == NULL||ps->a == NULL)
		return ;
	tmp = ps->a;
	ps->a = ps->a -> next;
	last = ft_lstlast(ps->a);
	last->next = tmp;
	tmp->next = NULL;
	if(n == 0)
		ft_printf("ra");
}

void	rb(t_pushswap *ps, int n)
{
	t_stack *tmp;
	t_stack *last;
	if(ps == NULL||ps->b == NULL)
		return ;
	tmp = ps->b;
	ps->b = ps->b -> next;
	last = ft_lstlast(ps->b);
	last->next = tmp;
	tmp->next = NULL;
	if(n == 0)
		ft_printf("rb");
}

void rr(t_pushswap *ps)
{
	ra(ps, 1);
	rb(ps, 1);
	ft_printf("rr");
}