/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:21:12 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/16 14:22:30 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushwap.h"

long    ft_atol(char *av)
{
	long	i;
	long	sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((av[i] >= 9 && av[i] <= 13 )|| av[i] == ' ')
		i++;
	while (av[i] == '-' || av[i] == '+')
	{
		if (av[i] == '-')
			sign = -sign;
		i++;
	}
	while (av[i] && av[i] >= '0' && av[i] <= '9')
	{
		number = number * 10 + (av[i] - 48);
		i++;
	}
    if(number == INT_MAX || number == INT_MIN)
        return(INT_MAX + 1);
	return (number * sign);
}

int	ft_isdigit(int c)
{
	if (c <= 0 && c >= 9)
		return (1);
	else
		return (0);
}
