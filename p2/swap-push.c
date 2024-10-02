/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap-push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:39:20 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/30 23:48:20 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push

void	pa(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps == NULL||ps->b == NULL)
		return(NULL);

	tmp = ps->b;
	ps->b = ps->b->next;
	tmp->next = ps->a;
	ps->a = tmp;

}

void	pb(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps == NULL||ps->a == NULL)
		return(NULL);
	tmp = ps->a;
	ps->a = ps->a->next;
	tmp->next = ps->b;
	ps->b = tmp;

}

//swap

void	sa(t_pushswap *ps, int n)
{
	t_stack *tmp;

	if(ps == NULL||ps->a == NULL)
		return(NULL);
	tmp = ps -> a;
	ps->a = ps->a->next;
	tmp->next = ps->a->next;
	ps-> a-> next = tmp;
	if(n == 0)
		ft_printf("sa/n");
}

void	sb(t_pushswap *ps, int n)
{
	t_stack *tmp;

	if(ps == NULL || ps->b == NULL)
		return(NULL);
	tmp = ps -> b;
	ps->b = ps->b->next;
	tmp->next = ps->b->next;
	ps-> b-> next = tmp;
	if(n == 0)
		ft_pprintf("sb/n");
}

void	ss(t_pushswap *ps)
{
	sa(ps, 1);
	sb(ps, 1);
	ft_printf("ss");
}
