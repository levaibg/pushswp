/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:00:00 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 00:06:32 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack **lst)
{
	t_stack	*current;
	t_stack	*temp;
	int		index;

	current = *lst;
	while (current)
	{
		temp = *lst;
		index = 0;
		while (temp)
		{
			if (temp->value < current->value)
				index++;
			temp = temp->next;
		}
		current->index = index;
		current = current->next;
	}
}

int	maxbits(t_stack *lst)
{
	int	max;
	int	bits;

	max = ft_lstlast(lst)->value;
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

int	get_offset(t_stack *lst)
{
	int	min;

	min = ft_lstlast(lst)->value;
	if (min < 0)
		return (-min);
	return (0);
}

void	adjust_values(t_stack *lst, int offset)
{
	t_stack	*temp;

	temp = lst;
	while (temp)
	{
		temp->value += offset;
		temp = temp->next;
	}
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	m_b;
	int	size;

	assign_index(a);
	adjust_values(*a, get_offset(*a));
	size = len_stack(*a);
	m_b = maxbits(*a);
	i = -1;
	while (++i < m_b)
	{
		j = -1;
		while (++j < size)
		{
			if ((((*a)->index >> i) & 1) == 0)
				pb(b, a);
			else
				ra(a, 0);
		}
		while (len_stack(*b) > 0)
			pa(a, b);
	}
	adjust_values(*a, -get_offset(*a));
}

void 
