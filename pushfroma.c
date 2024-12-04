/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushfroma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:11:36 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:11:38 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_push2_b(t_stack **stacka, t_stack **stackb, int count, int i)
{
	if (count == rr_type(*stacka, *stackb, (*stacka)->stack[i], 'b'))
		count = use_rr_type(stacka, stackb, (*stacka)->stack[i], 'b');
	else if (count == rrarb_type(*stacka, *stackb,
			(*stacka)->stack[i], 'b'))
		count = use_rrarb_type(stacka, stackb, (*stacka)->stack[i], 'b');
	else if (count == rrr_type(*stacka, *stackb,
			(*stacka)->stack[i], 'b'))
		count = use_rrr_type(stacka, stackb, (*stacka)->stack[i], 'b');
	else if (count == rarrb_type(*stacka, *stackb,
			(*stacka)->stack[i], 'b'))
		count = use_rarrb_type(stacka, stackb, (*stacka)->stack[i], 'b');
}

void	findcheapnbr_push(t_stack **stacka, t_stack **stackb)
{
	int	count;
	int	i;

	count = 0;
	while ((*stacka)->size > 3 && hasbeensorted(*stacka) == 0)
	{
		i = 0;
		count = rotateina(*stacka, *stackb);
		while (count >= 0 && i < (*stacka)->size)
		{
			rotate_push2_b(stacka, stackb, count, i);
			if (i < (*stacka)->size)
				i++;
		}
	}
}

t_stack	**movefroma_to_btill3left(t_stack **stacka, t_stack **stackb)
{
	if ((*stacka)->size > 3 && hasbeensorted(*stacka) == 0)
	{
		pb(stacka, stackb);
		pb(stacka, stackb);
	}
	if ((*stacka)->size > 3 && hasbeensorted(*stacka) == 0)
		findcheapnbr_push(stacka, stackb);
	if ((*stacka)->size == 3 && hasbeensorted(*stacka) == 0)
		sorting3(stacka);
	return (stackb);
}
