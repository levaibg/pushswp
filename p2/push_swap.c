/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:45:34 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/13 01:15:26 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = NULL;
	if (ac <= 1)
		return (1);
	ft_checker(ac,av);
	a = stackfill(ac, av);
	if(!a)
		return(1);
	if (ifsorted(a))
	{
		if (len_stack(a) == 2)
			sa(a, 0);
		else if (len_stack(a) == 3)
			sort3(&a);
		// else if (len_stack(a) == 5)
		// 	sort4(&a,&b);
		// else
		// 	sort;
	}
	ft_freelst(&a);
	ft_freelst(&b);
	return (0);
}


