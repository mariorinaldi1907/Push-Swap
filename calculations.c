/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:43:00 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 12:51:09 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	minvalue(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->stack[0];
	while (i < stack->size)
	{
		if (min > stack->stack[i])
			min = stack->stack[i];
		i++;
	}
	return (min);
}

int	maxvalue(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->stack[0];
	while (i < stack->size)
	{
		if (max < stack->stack[i])
			max = stack->stack[i];
		i++;
	}
	return (max);
}

int	findindex(t_stack *stack, int nbr)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->stack[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

int	findingindexinstacka(t_stack *stacka, int nbr)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (nbr > maxvalue(stacka) || nbr < minvalue(stacka))
		i = findindex(stacka, minvalue(stacka));
	else if (nbr > stacka->stack[stacka->size - 1] && nbr < stacka->stack[0])
		i = 0;
	else
	{
		while ((j < stacka->size)
			&& (stacka->stack[j] > nbr && stacka->stack[j + 1] < nbr))
		{
			j++;
			i++;
		}
	}
	return (i);
}

int	findingindexinstackb(t_stack *stackb, int nbr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nbr > maxvalue(stackb) || nbr < minvalue(stackb))
		i = findindex(stackb, maxvalue(stackb));
	else if (nbr < stackb->stack[stackb->size - 1] && nbr > stackb->stack[0])
		i = 0;
	else
	{
		while (j < stackb->size
			&& (stackb->stack[j] < nbr || stackb->stack[j + 1] > nbr))
		{
			j++;
			i++;
		}
	}
	return (i);
}
