/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap-push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:39:20 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 15:29:00 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!(*stack_b))
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*tmp;

	if (!(*stack_a))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	write(1, "pb\n", 3);
}

//swap
t_stack	*sa(t_stack *lst, int n)
{
	t_stack	*lst_tmp;
	int		tmp;

	lst_tmp = lst;
	if (!lst->next)
		return (NULL);
	lst = lst->next;
	tmp = lst->value;
	lst->value = lst_tmp->value;
	lst = lst_tmp;
	lst->value = tmp;
	if (n == 0)
	{
		write(1, "sa\n", 3);
	}
	return (lst);
}

t_stack	*sb(t_stack *lst, int n)
{
	t_stack	*lsttemp;
	int		tmp;

	if (!lst)
		return (NULL);
	lsttemp = lst;
	if (lst->next == NULL)
		return (NULL);
	lst = lst->next;
	tmp = lst->value;
	lst->value = lsttemp->value;
	lsttemp->value = tmp;
	if (n == 0)
		write(1, "sb\n", 3);
	return (lst);
}

void	ss(t_stack **a, t_stack **b)
{
	sa(*a, 1);
	sb(*b, 1);
	write(1, "ss\n", 3);
}
