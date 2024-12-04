/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:42:01 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/24 13:42:02 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sorting2(t_stack *stacka)
{
	int	i;

	i = 0;
	if (stacka->stack[i] > stacka->stack[1])
		sa(&stacka);
}

/*int main() {
    int stack_a_data[MAX_STACK] = {4,2};

    t_stack stack_a = {stack_a_data, 2};
    printf("Original stack: ");
    for (int i = 0; i < stack_a.size; i++) {
        printf("%d ", stack_a.stack[i]);
    }
    printf("\n");

    // Sort the stack
    sorting2(&stack_a);

    printf("Sorted stack: ");
    for (int i = 0; i < stack_a.size; i++) {
        printf("%d ", stack_a.stack[i]);
    }
    printf("\n");
    
    return 0;
}*/
