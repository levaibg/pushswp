#include <stdio.h>
#include <stdlib.h>
#include "./libftp/libft.h"

// Définition de la structure pour un nœud de pile

t_stack *beforelast(t_pushswap *ps)
{
	t_stack *tmp;

	tmp = ps->a;
	while (tmp -> next != NULL)
	{
		tmp = tmp->next;
	}
	return(tmp);
}

void	reversr(t_pushswap *ps)
{
	t_stack *tmp;
	t_stack *last;

	tmp = beforelast(ps);
	tmp -> next = NULL;
	last->next = ps->a;
    ps->a = last;
}


void	sb(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps->b == NULL || ps == NULL)
		return ;
	tmp = ps -> b;
	ps->b = ps->b->next;
	tmp->next = ps->b->next;
	ps-> b-> next = tmp;
}

void	rb(t_pushswap *ps)
{
	t_stack *tmp;
	t_stack *last;
	if(ps->b == NULL || ps == NULL)
		return ;
	tmp = ps->b;
	ps->b = ps->b -> next;
	last = ft_lstlast(ps->b);
	last->next = tmp;
	tmp->next = NULL;
}

void	sa(t_pushswap *ps)
{
	t_stack *tmp;

	if(ps->a == NULL || ps == NULL)
		return ;
	tmp = ps -> a;
	ps->a = ps->a->next;
    tmp->next = ps->a->next;
	ps-> a-> next = tmp;

}

void	ra(t_pushswap *ps)
{
	t_stack *tmp;
	t_stack *last;
	if(ps->a == NULL || ps == NULL)
		return ;
	tmp = ps->a;
	ps->a = ps->a -> next;
	last = ft_lstlast(ps->a);
	last->next = tmp;
	tmp->next = NULL;
}
// Fonction pour ajouter un élément à une pile
void push(t_stack **stack, int value) {
    t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
    if (!new_node) {
        printf("Erreur d'allocation de mémoire\n");
        exit(1);
    }
    new_node->value = value;
    new_node->next = *stack;
    *stack = new_node;
}

// Fonction pour afficher les éléments d'une pile
void print_stack(t_stack *stack) {
    while (stack != NULL) {
        printf("%d -> ", stack->value);
        stack = stack->next;
    }
    printf("NULL\n");
}

// Fonction pour afficher la structure t_pushswap
void print_pushswap(t_pushswap *ps) {
    printf("Pile a: ");
    print_stack(ps->a);
    printf("Pile b: ");
    print_stack(ps->b);
}

int main() {
    // Initialisation d'une instance de t_pushswap
    t_pushswap ps;
    ps.a = NULL;  // Initialement, les piles sont vides
    ps.b = NULL;

    // Ajout d'éléments aux piles
	push(&ps.a, 50);
	push(&ps.a, 40);
    push(&ps.a, 30);
 	push(&ps.a, 20);
	push(&ps.a, 10);

	push(&ps.b, 40);
    push(&ps.b, 50);
    push(&ps.b, 10);
    push(&ps.b, 70);

    // Affichage de la structure t_pushswap
	//sa(&ps);
  //  sb(&ps);
//	ra(&ps);
	rb(&ps);
	reversr(&ps);
	print_pushswap(&ps);

    return 0;
}