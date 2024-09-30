/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:25:23 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/30 01:35:00 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"

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
