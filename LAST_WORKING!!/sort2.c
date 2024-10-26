/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 00:37:45 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/13 19:12:06 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int maxbits(t_stack *lst)
{
    int max;
    int bits;

    max = ft_max(lst)->value;
    bits = 0;
    while ((max >> bits) != 0)
        bits++;
    return (bits);
}

void radix_sort(t_stack **a, t_stack **b)
{
    int i;
    int j;
    int max_bits;
    int size;

    size = len_stack(*a);       
    max_bits = maxbits(*a);    
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if ((((*a)->value >> i) & 1) == 0)  
                pb(b, a);                       
            else
                ra(a, 0);                        
            j++;
        }
        while (len_stack(*b) > 0)               
            pa(a, b);
        i++;
    }
}

/*test whith offest 
int	get_offset(t_stack *lst)
{
	int	min;

	min = ft_min(lst)->value;
	if (min < 0)
		return (-min);
	return (0);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int		i;
	int		j;
	int		max_bits;
	int		size;
	int		offset;
	t_stack	*temp;

	offset = get_offset(*a);
	temp = *a;
	while (temp)
	{
		temp->value += offset;
		temp = temp->next;
	}
	size = len_stack(*a);
	max_bits = maxbits(*a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->value >> i) & 1) == 0)
				pb(b, a);
			else
				ra(a, 0);
			j++;
		}
		while (len_stack(*b) > 0)
			pa(a, b);
		i++;
	}
	temp = *a;
	while (temp)
	{
		temp->value -= offset;
		temp = temp->next;
	}
}

*/
