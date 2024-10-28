/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:38:13 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 01:01:32 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stackfill(int ac, char **av)
{
	t_stack	*lst;
	t_stack	*new;
	char	**av2;
	int		i;

	i = 1;
	lst = NULL;
	if (ac == 2)
	{
		av2 = ft_split(av[1], ' ');
		i = 0;
	}
	else
		av2 = av;
	while (av2[i])
	{
		new = ft_lstnew(ft_atol(av2[i]));
		ft_lstadd_back(&lst, new);
		i++;
	}
	if (ac == 2)
		ft_free_array(av2);
	return (lst);
}

int	ifsorted(t_stack *lst)
{
	int	i;
	int	nb;

	i = 1;
	if (lst == NULL)
		return (-1);
	while (lst->next != NULL)
	{
		nb = lst->value;
		lst = lst->next;
		i++;
		if (nb > lst->value)
			return (i);
	}
	return (0);
}
