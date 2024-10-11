/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:28:05 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/11 17:58:41 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <unistd.h>
#include <stdlib.h>

void	check_error(int n, char **str)
{
	if (n == 1)
	{
		write(1, "Error\n", 6);
		if (str)
		{
			for (int i = 0; str[i]; i++)
			{
				free(str[i]);
			}
			free(str);
		}
		exit(1);
	}
}

int	ft_isdigit(char c)
{

	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}
