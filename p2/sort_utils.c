/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:41:14 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/12 00:16:18 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
void	setup_target_a(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*target;
	t_stack	*temp;
	long	min;

	temp = stack_b;
	while (stack_a)
	{
		min = LONG_MIN;
		target = NULL;
		while (stack_b)
		{
			if (stack_a->value > stack_b->value && stack_b->value > min)
			{
				target = stack_b;
				min = stack_b->value;
			}
			stack_b = stack_b->next;
		}
		stack_b = temp;
		if (min == LONG_MIN)
			stack_a->target = ft_max(stack_b);
		else
			stack_a->target = target;
		stack_a = stack_a->next;
	}
}

void	setup_target_b(t_stack *stack_b, t_stack *stack_a)
{
	t_stack	*target;
	t_stack	*temp;
	long	min;

	temp = stack_a;
	while (stack_b)
	{
		min = LONG_MAX;
		target = NULL;
		while (stack_a)
		{
			if (stack_b->value < stack_a->value && stack_a->value < min)
			{
				target = stack_a;
				min = stack_a->value;
			}
			stack_a = stack_a->next;
		}
		stack_a = temp;
		if (min == LONG_MAX)
			stack_b->target = ft_min(stack_a);
		else
			stack_b->target = target;
		stack_b = stack_b->next;
	}
}
