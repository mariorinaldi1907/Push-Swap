/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:44:09 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/25 13:46:15 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack)
{
	int	temp;
	int	i;

	temp = (*stack)->stack[(*stack)->size - 1];
	i = (*stack)->size - 1;
	while (i > 0)
	{
		(*stack)->stack[i] = (*stack)->stack[i - 1];
		i--;
	}
	(*stack)->stack[0] = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack)
{
	int	temp;
	int	i;

	temp = (*stack)->stack[(*stack)->size - 1];
	i = (*stack)->size - 1;
	while (i > 0)
	{
		(*stack)->stack[i] = (*stack)->stack[i - 1];
		i--;
	}
	(*stack)->stack[0] = temp;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{	
	int	temp;
	int	i;

	if ((*stack_a)->size > 1 && (*stack_b)->size > 1)
	{
		temp = (*stack_a)->stack[(*stack_a)->size - 1];
		i = (*stack_a)->size - 1;
		while (i > 0)
		{
			(*stack_a)->stack[i] = (*stack_a)->stack[i - 1];
			i--;
		}
		(*stack_a)->stack[0] = temp;
		temp = (*stack_b)->stack[(*stack_b)->size - 1];
		i = (*stack_b)->size - 1;
		while (i > 0)
		{
			(*stack_b)->stack[i] = (*stack_b)->stack[i - 1];
			i--;
		}
		(*stack_b)->stack[0] = temp;
		write(1, "rrr\n", 4);
	}
}

/*int main() {
    int stack_a[MAX_STACK] = {3, 1, 6, 4, 5, 2, 9, 8, 10 ,7};
    int stack_b[MAX_STACK] = {10, 11, 15 , 14 , 13 , 12 , 7 , 16 };
    
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
    stack_b_struct->size = 8;
   
    rra(&stack_a_struct);
    
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

    //rra(&stack_b_struct);
   
   
    rr(&stack_a_struct,&stack_b_struct);
    rr(&stack_a_struct,&stack_b_struct);
    rr(&stack_a_struct,&stack_b_struct);
    rr(&stack_a_struct,&stack_b_struct);


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
   
   
    //rrr(&stack_a_struct, &stack_b_struct);
    ra(&stack_a_struct);
    ra(&stack_a_struct);
    rb(&stack_b_struct);
    rb(&stack_b_struct);



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
}*/