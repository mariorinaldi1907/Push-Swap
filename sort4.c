/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:42:19 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/24 13:42:20 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push1tob(t_stack *stacka, t_stack *stackb)
{
	pb(&stacka, &stackb);
	if (stacka->size == 3)
		sorting3(&stacka);
	pa(&stacka, &stackb);
}

void	sorting4(t_stack *stacka, t_stack *stackb)
{
	if (smallest(stacka, 0) == 1 || largest(stacka, 0) == 1)
	{
		push1tob(stacka, stackb);
		if (largest (stacka, 0) == 1)
			ra(&stacka);
	}
	else if (smallest (stacka, 3) == 1 || largest(stacka, 3) == 1)
	{
		rra(&stacka);
		push1tob(stacka, stackb);
		if (largest (stacka, 0) == 1)
			ra(&stacka);
	}
	else if (smallest(stacka, 1) == 1 || largest(stacka, 1) == 1)
	{
		ra(&stacka);
		push1tob(stacka, stackb);
		if (largest (stacka, 0) == 1)
			ra(&stacka);
	}
}

/*int main(void) {
    int stack_a_array[MAX_STACK] = {4, 2, 1, 6};
    int stack_b_array[MAX_STACK] = {};

    t_stack stack_a = {stack_a_array, 4}; // Initialize stack A with size 4
    t_stack stack_b = {stack_b_array, 0}; // Initialize stack B with size 0

    printf("Original stack: ");
    for (int i = 0; i < stack_a.size; i++) {
        printf("%d ", stack_a.stack[i]);
    }
    printf("\n");

    // Sort the stack
    sorting4(&stack_a, &stack_b);

    printf("Sorted stack: ");
    for (int i = 0; i < stack_a.size; i++) {
        printf("%d ", stack_a.stack[i]);
    }
    printf("\n");

    return 0;
}*/
