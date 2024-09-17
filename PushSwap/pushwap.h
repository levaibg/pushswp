/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushwap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:49:08 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/16 14:24:39 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHWAP_H
# define PUSHWAP_H


#include "./libftp/libft.h"
#include "./printff/ft_printf.h"

typedef struct s_struct
{
	int		index;
	int		value;
	struct s_struct *•;
} t_stack;

typedef struct s_pushswap
{
	t_stack *a;
	t_stack *b;
}		t_pushswap;

#include "stdio.h"
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

void	pa(t_stack *ps);
void	pb(t_stack *ps);
void	sa(t_stack *ps);
t_stack *beforelast(t_pushswap *ps);
t_stack *beforelast2(t_pushswap *ps);
void	reversra(t_pushswap *ps);
void	reversrb(t_pushswap *ps);
void	rrr(t_pushswap *ps);
void	sb(t_pushswap *ps);
void	ss(t_pushswap *ps);
void	ra(t_pushswap *ps);
void	rb(t_pushswap *ps);
void	rr(t_pushswap *ps);





#endif