/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checher.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:53:49 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/01 01:26:30 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checker(int ac, char **av)
{
	int i;
	long nb;
	char aargv;

	i = 1;
	if(ac == 2)
	{
		av = ft_split(argv[1], ' '0);
		i = 0;
	}

	while(av[i])
	{
		nb = ft_atol(av[i]);
		if(ft_isdigit(av[i]) == 1)
			return;
		if(checkdup(av[1] == 1))
		return;

	}

}

