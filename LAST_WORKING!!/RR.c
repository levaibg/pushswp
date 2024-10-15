/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RR.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:34:19 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/10 19:32:10 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*beforelast(t_stack *lst)
{
	t_stack	*tmp;
	int		len;
	int		i;

	i = 0;
	if (!lst || !(lst->next))
		return (NULL);
	tmp = lst;
	len = len_stack(tmp);
	while (i < len - 2)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

void	rra(t_stack **a, int n)
{
	t_stack	*before_last;
	t_stack	*last;

	if (!(*a) || !(*a)->next)
		return ;
	before_last = beforelast(*a);
	last = before_last->next;
	before_last->next = NULL;
	last->next = *a;
	*a = last;
	if (n == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int n)
{
	t_stack	*before_last;
	t_stack	*last;

	if (!(*b) || !(*b)->next)
		return ;
	before_last = beforelast(*b);
	last = before_last->next;
	before_last->next = NULL;
	last->next = *b;
	*b = last;
	if (n == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 1);
	rrb(b, 1);
	write(1, "rrr\n", 4);
}
