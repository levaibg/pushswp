/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checher.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:53:49 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/10 22:13:27 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checker(int ac, char **av)
{
	int		i;
	char	**args;

	i = 1;
	args = NULL;
	if(ac <= 1)
		check_error(1);
	if (ac == 2)
	{
		i = 0;
		args = ft_split(av[1], ' ');
	}
	else 
		args = av;	
	while (args[i])
	{
		if(ft_isdigit2(args[i]) == 1)
			check_error(1);
		check_error(checkdup(args[1]));
		i++;
	}
	*args = args[1];
}
