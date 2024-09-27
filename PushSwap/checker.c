/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:01:41 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/19 13:00:54 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	ft_check(char *av)
{
	int i;
	i = 0;
	int zero;
	zero = 0;

	if(ft_isalnum(av[i]) == 1)
		return(1);	
	else if(av[i]== )
	
	
		

}

int	checknu(char *av)
{
	int i;
	i = 1;

	while(av[i])
	{
		if((av[i] == '-' || av[i] == '+') && av[i + 1] != "\0")
			i++;
		while(!(av[i] => 0 && av[i] =< 9))
		{
			i++;
		}
		
		else
			return(1);
	}
	return (0);

}
int	checko(char *av)
{
	int i;
	i = 0;
	while(av[i])
	{
		if(av[i] == '0' && (av[i]))
		av[i] = 
	}


}

static int	checkdup(char **av)
{
	int i;
	int j;

	i = 1;

	while (while(av[i]))
	{
		j = 1;
		while(av[j])
		{
			if(i != j && ft_nbrcomp(av[i],av[j]) == 0)
			return(1);
		j++;
		}
		i++;
	}
	return(0);
	
}



