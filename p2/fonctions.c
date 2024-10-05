/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:38:13 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/05 04:17:08 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack	*stackfill(int ac, char **av)
{
	t_stack *lst;
	t_stack *new;
	char **av2;
	int i;

	i = 1;
	if(ac == 2)
	{
		i = 0;
		av2 = ft_split(av[1], ' ');
	}
	else 
		av2 = av[1];
	while(av[i])
	{
			new = ft_lstnew(ft_atoi(av2[1]));
			ft_lstadd_back(lst, new);
			i++;
	}
	free(av2);
	return(lst);
}

int	sorted(t_stack *lst)
{
	int	a;
	int	i;

	i = 1;
	while (lst->next != NULL)
	{
		a = lst->value;
		lst = lst->next;
		i++;
		if (lst->value < a)
			return (i);
	}
	return (0);
}
