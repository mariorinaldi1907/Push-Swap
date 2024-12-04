/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortmorethan4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:10:25 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:10:27 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rraback(t_stack *stacka)
{
	int	index;

	index = findindex(stacka, minvalue(stacka));
	if (index < (stacka)->size - index)
	{
		while ((stacka)->stack[0] != minvalue(stacka))
			ra(&stacka);
	}
	else
	{
		while ((stacka)->stack[0] != minvalue(stacka))
			rra(&stacka);
	}
}

void	sortingmorethan4(t_stack *stacka, t_stack *stackb)
{
	if ((stacka)->size > 4 && hasbeensorted(stacka) == 0)
	{
		stackb = *movefroma_to_btill3left(&stacka, &stackb);
		stacka = *movefromb_backto_a(&stacka, &stackb);
		ra_rraback(stacka);
	}
}
