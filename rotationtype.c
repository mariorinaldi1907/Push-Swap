/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotationtype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:11:14 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:11:20 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrarb_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type)
{
	int	count;
	int	sizea;

	count = 0;
	sizea = stacka->size;
	if (stack_type == 'a')
	{
		if (findingindexinstacka(stacka, nbr))
			count = sizea - findingindexinstacka(stacka, nbr);
		count = count + findindex(stackb, nbr);
	}
	else
	{
		if (findindex(stacka, nbr))
			count = sizea - findindex(stacka, nbr);
		count = count + findingindexinstackb(stackb, nbr);
	}
	return (count);
}

int	rarrb_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type)
{
	int	count;
	int	sizeb;

	count = 0;
	sizeb = stackb->size;
	if (stack_type == 'a')
	{
		if (findindex(stackb, nbr))
			count = sizeb - findindex(stackb, nbr);
		count = count + findingindexinstacka(stacka, nbr);
	}
	else
	{
		if (findingindexinstackb(stackb, nbr))
			count = sizeb - findingindexinstackb(stackb, nbr);
		count = count + findindex(stacka, nbr);
	}
	return (count);
}

int	rotateina(t_stack *stacka, t_stack *stackb)
{
	int	count;
	int	j;

	j = 0;
	count = rrr_type(stacka, stackb, stacka->stack[j], 'b');
	while (j < stacka->size)
	{
		if (count > rr_type(stacka, stackb, stacka->stack[j], 'b'))
			count = rr_type(stacka, stackb, stacka->stack[j], 'b');
		if (count > rrarb_type(stacka, stackb, stacka->stack[j], 'b'))
			count = rrarb_type(stacka, stackb, stacka->stack[j], 'b');
		if (count > rarrb_type(stacka, stackb, stacka->stack[j], 'b'))
			count = rarrb_type(stacka, stackb, stacka->stack[j], 'b');
		if (count > rrr_type(stacka, stackb, stacka->stack[j], 'b'))
			count = rrr_type(stacka, stackb, stacka->stack[j], 'b');
		j++;
	}
	return (count);
}

int	rotateinb(t_stack *stacka, t_stack *stackb)
{
	int	count;
	int	j;

	j = 0;
	count = rrr_type(stacka, stackb, stacka->stack[j], 'a');
	while (j < stackb->size)
	{
		if (count > rr_type(stacka, stackb, stackb->stack[j], 'a'))
			count = rr_type(stacka, stackb, stackb->stack[j], 'a');
		if (count > rrarb_type(stacka, stackb, stackb->stack[j], 'a'))
			count = rrarb_type(stacka, stackb, stackb->stack[j], 'a');
		if (count > rarrb_type(stacka, stackb, stackb->stack[j], 'a'))
			count = rarrb_type(stacka, stackb, stackb->stack[j], 'a');
		if (count > rrr_type(stacka, stackb, stackb->stack[j], 'a'))
			count = rrr_type(stacka, stackb, stackb->stack[j], 'a');
		j++;
	}
	return (count);
}
