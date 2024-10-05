/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:43:30 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/05 18:13:11 by lloginov         ###   ########.fr       */
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
	if (number == INT_MAX || (number * sign == INT_MIN))
		return (INT_MAX + 1);
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

int	ft_nbrcomp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((char)s1[i] - (char)s2[j]);
}

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

static int	checkdup(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 1;
		while (av[j])
		{
			if (i != j && ft_nbrcomp(av[i], av[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
