/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checher.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:53:49 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/05 18:27:52 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checker(int ac, char **av)
{
	int		i;
	long	nb;
	char	**args;

	i = 1;
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		i = 0;
	}
	while (av[i])
	{
		nb = ft_atol(av[i]);
		check_error(ft_isdigitt(av[i]));
		check_error(checkdup(av[1]));
		check_error(nb);
		i++;
	}
	args = av[1];
}
