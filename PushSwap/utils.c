/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:21:12 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/19 13:00:54 by lloginov         ###   ########.fr       */
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

int ft_nbrcomp(char *s1, char *s2)
{
    int i;
    int j;
    
    i = 0;
    j = 0;

    while(s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
    {
        i++;
        j++;
    }
    return((char)s1[i] - (char)s2[j]);
}

char	*ft_split(char *src, char car)
{
	int	i;
	int	j;
	char *str;

	i = 0;
	j= 0;

	if(ft_strchr(src, car) == NULL)
		return(src);
	while(src[j] != car &&  src[j] != '\0')
		j++;
	str = malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	while(i < j)
	{
		str[i] = src[i];
		i++;
	}
	free(src);
	str[i] = '\0';
	return (str);
}

char *ft_strchr(const char *s, int c) 
{
    while (*s) 
	{
        if (*s == (char)c) 
			return (char *)s;
        s++;
    }
    return (c == '\0') ? (char *)s : NULL;
}
