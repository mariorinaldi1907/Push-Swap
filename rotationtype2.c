/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotationtype2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:10:52 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:10:59 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type)
{
	int	count;

	count = 0;
	if (stack_type == 'a')
	{
		count = findingindexinstacka(stacka, nbr);
		if (count < findindex(stackb, nbr))
			count = findindex(stackb, nbr);
	}
	else
	{
		count = findingindexinstackb(stackb, nbr);
		if (count < findindex(stacka, nbr))
			count = findindex(stacka, nbr);
	}
	return (count);
}

int	rrr_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type)
{
	int	count;
	int	sizea;
	int	sizeb;

	count = 0;
	sizea = stacka->size;
	sizeb = stackb->size;
	if (stack_type == 'a')
	{
		if (findingindexinstacka(stacka, nbr))
			count = sizea - findingindexinstacka(stacka, nbr);
		if ((count < (sizeb - findindex(stackb, nbr)))
			&& findindex(stackb, nbr))
			count = sizeb - findindex(stackb, nbr);
	}
	else
	{
		if (findingindexinstackb(stackb, nbr))
			count = sizeb - findingindexinstackb(stackb, nbr);
		if ((count < (sizea - findindex(stacka, nbr)))
			&& findindex(stacka, nbr))
			count = sizea - findindex(stacka, nbr);
	}
	return (count);
}
