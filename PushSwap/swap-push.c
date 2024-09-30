/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap-push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:08:22 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/30 01:35:00 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushwap.h"



int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}


void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}










