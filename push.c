/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:41:13 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/24 13:41:15 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pop(t_stack **stack)
{
	int	nbr;
	int	i;

	nbr = (*stack)->stack[0];
	i = 0;
	if ((*stack)->size > 0)
	{
		while (i < (*stack)->size - 1)
		{
			(*stack)->stack[i] = (*stack)->stack[i + 1];
			i++;
		}
		((*stack)->size)--;
	}
	return (nbr);
}

void	push(t_stack **stack, int nbr)
{
	int	i;

	i = (*stack)->size;
	if (i < MAX_STACK)
	{
		while (i > 0)
		{
			(*stack)->stack[i] = (*stack)->stack[i - 1];
			i--;
		}
		(*stack)->stack[0] = nbr;
		((*stack)->size)++;
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	int	nbr;

	if ((*stack_b)->size >= 0)
	{
		nbr = pop(stack_b);
		push(stack_a, nbr);
	}
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	int	nbr;

	if ((*stack_a)->size > 0)
	{
		nbr = pop(stack_a);
		push(stack_b, nbr);
	}
	write(1, "pb\n", 3);
}

/*
int main() {
    int stack_a[MAX_STACK] = {3, 1, 6, 4, 5, 2, 9, 8, 10 ,7};
    int stack_b[MAX_STACK] = {};
    
    // Allocate memory for stack_a_struct and stack_b_struct
    t_stack *stack_a_struct = malloc(sizeof(t_stack));
    t_stack *stack_b_struct = malloc(sizeof(t_stack));

    // Check if memory allocation was successful
    if (stack_a_struct == NULL || stack_b_struct == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize stack A with size 8
    stack_a_struct->stack = stack_a;
    stack_a_struct->size = 10;

    // Initialize stack B with size -1 (empty)
    stack_b_struct->stack = stack_b;
    stack_b_struct->size = 0;

    // Perform pb operations
    pb(&stack_a_struct, &stack_b_struct);
    pb(&stack_a_struct, &stack_b_struct);
    pb(&stack_a_struct, &stack_b_struct);
    pb(&stack_a_struct, &stack_b_struct);

    printf("Stack A:");
    for (int i = 0; i < stack_a_struct->size; i++) {
        printf(" %d", stack_a_struct->stack[i]);
    }
    printf("\n");

    printf("Stack B:");
    for (int i = 0; i < stack_b_struct->size; i++) {
        printf(" %d", stack_b_struct->stack[i]);
    }
    printf("\n");

    rra(&stack_b_struct);
    rra(&stack_b_struct);
    pb(&stack_a_struct, &stack_b_struct);

    printf("Stack A:");
    for (int i = 0; i < stack_a_struct->size; i++) {
        printf(" %d", stack_a_struct->stack[i]);
    }
    printf("\n");

    printf("Stack B:");
    for (int i = 0; i < stack_b_struct->size; i++) {
        printf(" %d", stack_b_struct->stack[i]);
    }
    printf("\n");
    pa(&stack_a_struct, &stack_b_struct);
    pa(&stack_a_struct, &stack_b_struct);
    pa(&stack_a_struct, &stack_b_struct);

    // Print stacks
    printf("Stack A:");
    for (int i = 0; i < stack_a_struct->size; i++) {
        printf(" %d", stack_a_struct->stack[i]);
    }
    printf("\n");

    printf("Stack B:");
    for (int i = 0; i < stack_b_struct->size; i++) {
        printf(" %d", stack_b_struct->stack[i]);
    }
    printf("\n");

    // Free allocated memory
    free(stack_a_struct);
    free(stack_b_struct);

    return 0;
}
*/
