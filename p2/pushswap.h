/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:25:32 by lloginov          #+#    #+#             */
/*   Updated: 2024/09/30 23:32:53 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHWAP_H
# define PUSHWAP_H


// #include "./libftp/libft.h"
// #include "./printff/ft_printf.h"

typedef struct s_struct
{
	int		index;
	int		value;
	struct s_struct;
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

// reverse rotate

t_stack *beforelast(t_pushswap *ps);
t_stack *beforelast2(t_pushswap *ps);
void	reversra(t_pushswap *ps, int n);
void	reversrb(t_pushswap *ps, int n);
void	rrr(t_pushswap *ps);

// rotate
void	ra(t_pushswap *ps, int n);
void	rb(t_pushswap *ps, int n);
void rr(t_pushswap *ps);

// swap + push

void	sa(t_pushswap *ps, int n);
void	sb(t_pushswap *ps, int n);
void	ss(t_pushswap *ps);
void	pa(t_pushswap *ps);
void	pb(t_pushswap *ps);

// split

static size_t	count_words(const char *str, char c);
static const char	*next_wd(const char *str, char c);
static size_t	world_len(const char *str, char c);
char	**ft_split(const char *s, char c);

// utils

long    ft_atol(char *av);
int	ft_isdigit(int c);
int ft_nbrcomp(char *s1, char *s2);
char *ft_strchr(const char *s, int c);

// list-utils

void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);



#endif