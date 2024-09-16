/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:04:08 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/12 20:18:08 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"

void	sa(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps->a == NULL || ps == NULL)
		return(NULL);
	tmp = ps -> a;
	ps->a = ps->a->next;
	tmp->next = ps->a->next;
	ps-> a-> next = tmp;
	ft_printf("sa/n");
}

void	sb(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps->b == NULL || ps == NULL)
		return(NULL);
	tmp = ps -> b;
	ps->b = ps->b->next;
	tmp->next = ps->b->next;
	ps-> b-> next = tmp;
	ft_pprintf("sb/n");
}

void	ss(t_pushswap *ps)
{
	sa(ps);
	sb(ps);
	ft_printf("ss");
}
