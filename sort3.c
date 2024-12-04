/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:42:10 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/24 13:42:11 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	largest(t_stack *stack, int position)
{
	int	i;

	i = 0;
	while (i < (stack)->size)
	{
		if ((stack)->stack[position] < (stack)->stack[i])
			return (0);
		i++;
	}
	return (1);
}

int	smallest(t_stack *stack, int position)
{
	int	i;

	i = 0;
	while (i < (stack)->size)
	{
		if ((stack)->stack[position] > (stack)->stack[i])
			return (0);
		i++;
	}
	return (1);
}

void	sorting3(t_stack **stacka)
{
	if (largest(*stacka, 0) == 1)
	{
		if ((*stacka)->stack[1] > (*stacka)->stack[2])
		{
			ra(stacka);
			sa(stacka);
		}
		else
			ra(stacka);
	}
	else if (largest(*stacka, 2) == 1)
	{
		if ((*stacka)->stack[0] > (*stacka)->stack[1])
			sa(stacka);
	}
	else if (largest(*stacka, 1) == 1)
	{
		if ((*stacka)->stack[0] > (*stacka)->stack[2])
			rra(stacka);
		else
		{
			rra(stacka);
			sa(stacka);
		}
	}
}
/*int main() {
    int stack_a_data[MAX_STACK] = {3, 1, 2};

    t_stack stack_a;
    stack_a.stack = stack_a_data;
    stack_a.size = MAX_STACK;

    t_stack *ptr_stack_a = &stack_a;

    printf("Original stack: ");
    for (int i = 0; i < ptr_stack_a->size; i++) {
        printf("%d ", ptr_stack_a->stack[i]);
    }
    printf("\n");

    // Sort the stack
    sorting3(ptr_stack_a);

    printf("Sorted stack: ");
    for (int i = 0; i < ptr_stack_a->size; i++) {
        printf("%d ", ptr_stack_a->stack[i]);
    }
    printf("\n");

    return 0;
}*/
