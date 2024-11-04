/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:00:00 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 17:01:31 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_indexes(t_stack *stack)
{
	while (stack)
	{
		stack->index = -1;
		stack = stack->next;
	}
}

t_stack	*ft_next_min_index(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*min;
	int		found_min;

	min = NULL;
	found_min = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if ((tmp->index == -1)
			&& (!found_min || tmp->value < min->value))
		{
			min = tmp;
			found_min = 1;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	index_stack(t_stack **stack_a)
{
	t_stack	*min;
	int		index;

	index = 0;
	min = ft_next_min_index(stack_a);
	while (min)
	{
		min->index = index++;
		min = ft_next_min_index(stack_a);
	}
}

int	maxbit(t_stack **stack_a)
{
	t_stack	*new;
	int		max;
	int		count_bit;

	if (*stack_a == NULL)
		return (0);
	new = *stack_a;
	max = new->index;
	count_bit = 0;
	while (new)
	{
		if (new->index > max)
			max = new->index;
		new = new->next;
	}
	while ((max >> count_bit) != 0)
		count_bit++;
	return (count_bit);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	max_bits;
	int	size;

	index_stack(a);
	size = len_stack(*a);
	max_bits = maxbit(a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 0)
				pb(b, a);
			else
				ra(a, 0);
			j++;
		}
		while (len_stack(*b) > 0)
			pa(a, b);
		i++;
	}
}
