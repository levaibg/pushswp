/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:25:32 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/05 04:19:43 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_WAP_H
# define PUSH_WAP_H


// #include "./libftp/libft.h"
// #include "./printff/ft_printf.h"

typedef struct s_struct
{
	int		index;
	int		value;
	struct s_struct *target;
	struct s_stack	*next;
} t_stack;

#include "stdio.h"
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

// reverse rotate

t_stack *beforelast(t_stack *lst);
t_stack *beforelast2(t_stack *lst);
void	reversra(t_stack **a, int n);
void	reversrb(t_stack **b, int n);
void	rrr(t_stack **a, t_stack **b);

// rotate
void	ra(t_stack **a, int n);
void	rb(t_stack **b, int n);
void rr(t_stack **a, t_stack **b);

// swap + push

void	sa(t_stack *a, int n);
void	sb(t_stack *b, int n);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);

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
static int	checkdup(char **av);

// list-utils

void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int n);
void	ft_freelst(t_stack **lst);


// checker 
void	ft_checker(int ac, char **av);

//  fonctions
t_stack	*stackfill(int ac, char **av);
int	ifsorted(t_stack *lst);

// sort;
t_stack	*ft_max(t_stack *lst);
t_stack	*ft_min(t_stack *lst);
int len_stack(t_stack *lst);
void	sort3(t_stack *lst);

// utils 2
void    check_error(long int n);


#endif