/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:43:30 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 00:03:04 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *av)
{
	long	i;
	long	sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((av[i] >= 9 && av[i] <= 13) || av[i] == ' ')
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
	return (number * sign);
}

int	ft_isdigit2(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (ft_isdigit(num[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_nbrcomp(long nb, char **av, int i)
{
	i = i + 1;
	while (av[i])
	{
		if (ft_atol(av[i]) == nb)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strchr(char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
