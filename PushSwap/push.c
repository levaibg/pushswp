/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:25:23 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/04 00:23:37 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"

void	pa(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps->b == NULL || ps == NULL)
		return(NULL);

	tmp = ps->b;
	ps->b = ps->b->next;
	tmp->next = ps->a;
	ps->a = tmp;

}

void	pb(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps->a == NULL || ps == NULL)
		return(NULL);
	tmp = ps->a;
	ps->a = ps->a->next;
	tmp->next = ps->b;
	ps->b = tmp;

}
