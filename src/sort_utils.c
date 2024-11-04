/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:41:14 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 18:11:30 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort4(t_stack **a, t_stack **b)
{
	t_stack	*min_node;

	min_node = ft_min(*a);
	while (*a != min_node)
	{
		if (beforelast(*a) == min_node)
			rra(a, 0);
		else
			ra(a, 0);
	}
	pb(b, a);
	sort3(a);
	pa(a, b);
}

void	sort5(t_stack **a, t_stack **b)
{
	t_stack	*min_node;

	min_node = ft_min(*a);
	while (*a != min_node)
	{
		if (beforelast(*a)->next == min_node)
			rra(a, 0);
		else
			ra(a, 0);
	}
	pb(b, a);
	sort4(a, b);
	pa(a, b);
}

void	sort4_5(t_stack **a, t_stack **b)
{
	if (len_stack(*a) == 4)
		sort4(a, b);
	else if (len_stack(*a) == 5)
		sort5(a, b);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
