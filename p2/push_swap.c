/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:45:34 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/10 22:13:27 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = NULL;
	ft_checker(ac,av);
	a = stackfill(ac, av);
	if (ac == 1)
		return (1);
	if (ifsorted(a))
	{
		if (len_stack(a) == 2)
			sa(a, 0);
		else if (len_stack(a) == 3)
			sort3(&a);
		else if (len_stack(b) == 5)
			return(1);

	
	}
	return (0);
}
