/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:43:06 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/24 13:43:07 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stacka)
{
	int	temp;

	if ((*stacka)->size >= 2)
	{
		temp = (*stacka)->stack[0];
		(*stacka)->stack[0] = (*stacka)->stack[1];
		(*stacka)->stack[1] = temp;
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **stackb)
{
	int	temp;

	if ((*stackb)->size >= 2)
	{
		temp = (*stackb)->stack[0];
		(*stackb)->stack[0] = (*stackb)->stack[1];
		(*stackb)->stack[1] = temp;
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack **stacka, t_stack **stackb)
{
	int	temp;

	if ((*stackb)->size >= 2)
	{
		temp = (*stacka)->stack[0];
		(*stacka)->stack[0] = (*stacka)->stack[1];
		(*stacka)->stack[1] = temp;
		temp = (*stackb)->stack[0];
		(*stackb)->stack[0] = (*stackb)->stack[1];
		(*stackb)->stack[1] = temp;
		write(1, "ss\n", 3);
	}
}

/*int main() {
   int stack_a_data[MAX_STACK] = {1, 2, 3, 4, 5};
    int stack_b_data[MAX_STACK] = {6, 7, 8, 9, 10};

    t_stack stack_a = {stack_a_data, 5};
    t_stack stack_b = {stack_b_data, 5};
    // Perform sa operation
    sa(&stack_a);

    // Perform sb operation
    sb(&stack_b);

    // Perform ss operation
    ss(&stack_a, &stack_b);

    // Print stacks
    printf("Stack A:");
    for (int i = 0; i < stack_a.size; i++) {
        printf(" %d", stack_a.stack[i]);
    }
    printf("\n");

    printf("Stack B:");
    for (int i = 0; i < stack_b.size; i++) {
        printf(" %d", stack_b.stack[i]);
    }
    printf("\n");

    return 0;
}*/
