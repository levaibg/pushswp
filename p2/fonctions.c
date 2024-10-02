/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:38:13 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/02 19:01:15 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


void	stackfill(t_stack **lst, int ac, char **av)
{
	t_stack new;
	char **av2;
	int i;
	i = 1;

	if(ac == 2)
	{
		i = 0;
		av2 = ft_split(av[1], ' ');
	}
	else 
		av2 = av;
	while(av[i])
	{
			new = ft_lstnew(ft_atoi(av2[1]));
			ft_lstadd_back(lst, new);
			i++;
	}
	free(av2);
	
}

void	ifsorted(t_stack **lst)
{

	t_stack *tmp;

	tmp = *lst;
	while(tmp && tmp -> next)
	{
		if(tmp -> value > tmp ->next -> value)
			return(1);
		tmp = tmp -> next;
	}
	return(0);
}

