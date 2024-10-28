/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:41:14 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 00:03:48 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort4(t_stack **a, t_stack **b)
{
	t_stack	*min_node;

	min_node = ft_min(*a);
	if (*a == min_node)
		sa(*a, 0);
	else if (beforelast(*a) == min_node)
		rra(a, 0);
	else if ((*a)->next == min_node)
		ra(a, 0);
	else if ((*a)->next->next == min_node)
	{
		ra(a, 0);
		ra(a, 0);
	}
	pb(b, a);
	sort3(a);
}

void	sort5(t_stack **a, t_stack **b)
{
	t_stack	*min_node;

	min_node = ft_min(*a);
	if (*a == min_node)
		pb(b, a);
	else if (beforelast(*a) == min_node)
		rra(a, 0);
	else
		ra(a, 0);
	pb(b, a);
	sort4(a, b);
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
