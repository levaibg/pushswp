/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checher.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:53:49 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/11 20:13:20 by lloginov         ###   ########.fr       */
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
		exit(EXIT_SUCCESS);
	if (ac == 2)
	{
		i = 0;
		args = ft_split(av[1], ' ');
	}
	if(ac > 2)
		args = av;
	

	while (args[i])
	{
		if(ft_isdigit2(args[i]) == 1)
			check_error(1,args);
		if(checkdup(args[i]) == 1)
			check_error(1,args);
		i++;
	}
	if(ac == 2)
		free(args);
}
