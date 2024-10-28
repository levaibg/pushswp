/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:28:05 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/28 15:27:20 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_error(int n)
{
	if (n == 1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

void	ft_free_error(int n, char **str)
{
	if (n == 1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (n == 2)
	{
		write(1, "Error\n", 6);
		ft_free_array(str);
		exit(1);
	}
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
