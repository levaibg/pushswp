/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:45:34 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 17:47:41 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	sort_stack(t_stack **a, t_stack **b)
{
	if (len_stack(*a) == 2)
		sa(*a, 0);
	else if (len_stack(*a) == 3)
		sort3(a);
	else if (len_stack(*a) == 4 || len_stack(*a) == 5)
		sort4_5(a, b);
	else
		radix_sort(a, b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = NULL;
	if (ac <= 1)
		return (1);
	ft_checker(ac, av);
	a = stackfill(ac, av);
	initialize_indexes(a);
	if (!a)
		return (1);
	if (ifsorted(a))
		sort_stack(&a, &b);
	ft_freelst(&a);
	ft_freelst(&b);
	return (0);
}
