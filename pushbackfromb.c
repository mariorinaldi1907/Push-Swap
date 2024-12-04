/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushbackfromb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:11:48 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:11:51 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_push2_a(t_stack **stacka, t_stack **stackb, int count, int i)
{
	if (count == rr_type(*stacka, *stackb, (*stackb)->stack[i], 'a'))
		count = use_rr_type(stacka, stackb, (*stackb)->stack[i], 'a');
	else if (count == rrarb_type(*stacka, *stackb,
			(*stackb)->stack[i], 'a'))
		count = use_rrarb_type(stacka, stackb, (*stackb)->stack[i], 'a');
	else if (count == rarrb_type(*stacka, *stackb,
			(*stackb)->stack[i], 'a'))
		count = use_rarrb_type(stacka, stackb, (*stackb)->stack[i], 'a');
	else if (count == rrr_type(*stacka, *stackb,
			(*stackb)->stack[i], 'a'))
		count = use_rrr_type(stacka, stackb, (*stackb)->stack[i], 'a');
}

t_stack	**movefromb_backto_a(t_stack **stacka, t_stack **stackb)
{
	int	count;
	int	i;

	count = 0;
	while ((*stackb)->size > 0)
	{
		i = 0;
		count = rotateinb(*stacka, *stackb);
		while (count >= 0 && i < (*stackb)->size)
		{
			rotate_push2_a(stacka, stackb, count, i);
			if (i < (*stackb)->size)
				i++;
		}
	}
	return (stacka);
}
