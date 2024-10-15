/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checher.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:53:49 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/12 21:16:07 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checker(int ac, char **av)
{
	int		i;
	char	**args;

	i = 1;
	if (ac == 2)
	{
		i = 0;
		args = ft_split(av[1], ' ');
		ft_check_s(args, i);
	}
	else if (ac > 2)
	{
		args = av;
		ft_check_v(args, i);
	}

}

void	ft_check_s(char **args, int i)
{
	long nb;

	while (args[i])
	{
		nb = ft_atol(args[i]);
		if(ft_isdigit2(args[i]) == 1)
			ft_free_error(2,args);
		if(ft_nbrcomp(nb, args, i) == 1)
			ft_free_error(2,args);
		if(nb >= INT_MAX || nb <= INT_MIN)
			ft_free_error(2,args);
		i++;
	}
	ft_free_array(args);
}

void	ft_check_v(char **args, int i)
{
	long nb;

		while (args[i])
	{
		nb = ft_atol(args[i]);
		if(ft_isdigit2(args[i]) == 1)
			check_error(1);
		if(ft_nbrcomp(nb, args, i) == 1)
			check_error(1);
		if(nb >= INT_MAX || nb <= INT_MIN)
			check_error(1);
		i++;
	}
}