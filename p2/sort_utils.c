/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 23:41:14 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/12 23:35:54 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
void	init_index(t_stack *lst)
{
	long mid;
	int i;
	int negative;

	i = 0;
	mid = (len_stack(lst) / 2);
	while(lst)
	{
		if(i <= mid)
			lst->index = i++;
		else
		{
			negative = -len_stack(lst);
			lst->index = negative++;
		}
		lst = lst->next;
	}
}
