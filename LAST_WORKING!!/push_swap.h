/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:25:32 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/14 14:40:00 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
// #include "./libftp/libft.h"
// #include "./printff/ft_printf.h"

typedef struct s_stack
{
	int index;
	int value;
	struct s_stack *target;
	struct s_stack *next;
} t_stack;

// Reverse rotate
t_stack *beforelast(t_stack *lst);
// t_stack *beforelast2(t_stack *lst);
void rra(t_stack **a, int n);
void rrb(t_stack **b, int n);
void rrr(t_stack **a, t_stack **b);

// Rotate
void ra(t_stack **a, int n);
void rb(t_stack **b, int n);
void rr(t_stack **a, t_stack **b);

// Swap + push
t_stack *sa(t_stack *a, int n);
t_stack *sb(t_stack *b, int n);
void ss(t_stack **a, t_stack **b);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **b, t_stack **a);

// Split
size_t count_words(char *str, char c);
char *next_wd(char *str, char c);
size_t world_len(char *str, char c);
char **ft_split(char *s, char c);
void free_split(char **split, size_t i);

// Utils
long ft_atol(char *av);
int ft_nbrcomp(long nb, char **av, int i);
char *ft_strchr(char *s, int c);
int ft_isdigit2(char *num);

// List-utils
void ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack *ft_lstlast(t_stack *lst);
void ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack *ft_lstnew(int n);
void ft_freelst(t_stack **lst);

// Checker
void ft_checker(int ac, char **av);
void ft_check_s(char **args, int i);
void ft_check_v(char **args, int i);
// Fonctions
t_stack *stackfill(int ac, char **av);
int ifsorted(t_stack *lst);

// Sort
t_stack *ft_max(t_stack *lst);
t_stack *ft_min(t_stack *lst);
int len_stack(t_stack *lst);
void sort3(t_stack **lst);
void sort4(t_stack **a, t_stack **b);

// Utils 2
void check_error(int n);
int ft_isdigit(char i);
void ft_free_array(char **array);
// void printlst(t_stack *lst);
void ft_free_error(int n, char **str);

// sort2

int maxbits(t_stack *lst);
void radix_sort(t_stack **a, t_stack **b);
#endif
