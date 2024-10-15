/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:37:01 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/05 18:22:12 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a, int n)
{
	int		nb;
	t_stack	*temp;

	if (!(*stack_a))
		return ;
	nb = (*stack_a)->value;
	temp = (*stack_a)->next;
	free(*stack_a);
	(*stack_a) = temp;
	ft_lstadd_back(stack_a, ft_lstnew(nb));
	if (n == 0)
		write(1, "ra\n", 3);
}

void	rb(t_stack **stack_b, int n)
{
	int		nb;
	t_stack	*temp;

	if (!(*stack_b))
		return ;
	nb = (*stack_b)->value;
	temp = (*stack_b)->next;
	free(*stack_b);
	(*stack_b) = temp;
	ft_lstadd_back(stack_b, ft_lstnew(nb));
	if (n == 0)
		write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	write(1, "rr\n", 3);
}
