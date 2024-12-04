/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingfunctions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:10:38 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:10:41 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	hasbeensorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->stack[i] > stack->stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	sorting_algo(t_stack *stacka)
{
	t_stack	*stackb;

	if (hasbeensorted(stacka) == 1)
		return ;
	stackb = (t_stack *)malloc(sizeof(t_stack));
	if (stackb == NULL)
		return ;
	stackb->size = 0;
	stackb->stack = (int *)malloc((stacka->size) * sizeof(int));
	if (stackb->stack == NULL)
	{
		free(stackb);
		return ;
	}
	if (stacka->size == 2)
		sorting2(stacka);
	else if (stacka->size == 3)
		sorting3(&stacka);
	else if (stacka->size == 4)
		sorting4(stacka, stackb);
	else if (stacka->size > 4)
		sortingmorethan4(stacka, stackb);
	free(stackb->stack);
	free(stackb);
	stackb = NULL;
}
