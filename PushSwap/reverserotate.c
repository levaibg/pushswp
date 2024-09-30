/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 01:38:49 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/30 01:35:00 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"

t_stack *beforelast(t_pushswap *ps)
{
	t_stack *tmp;

	tmp = ps->a;
	while (tmp -> next ->next != NULL)
	{
		tmp = tmp->next;
	}
	return(tmp);
}

void	reversra(t_pushswap *ps, int n)
{
	t_stack *tmp;
	t_stack *last;

	tmp = beforelast(ps);
	last = tmp -> next;
	tmp -> next = NULL;
	last->next = ps->a;
    ps->a = last;
	if(n == 0)
		ft_printf("ra");
}

t_stack *beforelast2(t_pushswap *ps)
{
	t_stack *tmp;

	tmp = ps->b;
	while (tmp -> next ->next != NULL)
	{
		tmp = tmp->next;
	}
	return(tmp);
}

void	reversrb(t_pushswap *ps,int n)
{
	t_stack *tmp;
	t_stack *last;

	tmp = beforelast2(ps);
	last = tmp -> next;
	tmp -> next = NULL;
	last->next = ps->b;
    ps->b = last;
	if(n == 0)
		ft_printf("rb");
}

void	rrr(t_pushswap *ps)
{
	reversra(ps, 1);
	reversrb(ps, 1);
	ft_printf("rrr");
}