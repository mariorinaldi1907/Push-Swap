/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applyrotatepush.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:47:41 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 12:47:46 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	use_rr_type(t_stack **stacka, t_stack **stackb, int nbr, char stack_type)
{
	if (stack_type == 'a')
	{
		while ((*stackb)->stack[0] != nbr
			&& findingindexinstacka(*stacka, nbr) > 0)
			rr(stacka, stackb);
		while ((*stackb)->stack[0] != nbr)
			rb(stackb);
		while (findingindexinstacka(*stacka, nbr) > 0)
			ra(stacka);
		pa(stacka, stackb);
	}
	else if (stack_type == 'b')
	{
		while ((*stacka)->stack[0] != nbr
			&& findingindexinstackb(*stackb, nbr) > 0)
			rr(stacka, stackb);
		while ((*stacka)->stack[0] != nbr)
			ra(stacka);
		while (findingindexinstackb(*stackb, nbr) > 0)
			rb(stackb);
		pb(stacka, stackb);
	}
	return (-1);
}

int	use_rarrb_type(t_stack **stacka, t_stack **stackb, int nbr, char stack_type)
{
	if (stack_type == 'a')
	{
		while (findingindexinstacka(*stacka, nbr) > 0)
			ra(stacka);
		while ((*stackb)->stack[0] != nbr)
			rrb(stackb);
		pa(stacka, stackb);
	}
	else if (stack_type == 'b')
	{
		while ((*stacka)->stack[0] != nbr)
			ra(stacka);
		while (findingindexinstackb(*stackb, nbr) > 0)
			rrb(stackb);
		pb(stacka, stackb);
	}
	return (-1);
}

int	use_rrarb_type(t_stack **stacka, t_stack **stackb, int nbr, char stack_type)
{
	if (stack_type == 'a')
	{
		while (findingindexinstacka(*stacka, nbr) > 0)
			rra(stacka);
		while ((*stackb)->stack[0] != nbr)
			rb(stackb);
		pa(stacka, stackb);
	}
	else if (stack_type == 'b')
	{
		while ((*stacka)->stack[0] != nbr)
			rra(stacka);
		while (findingindexinstackb(*stackb, nbr) > 0)
			rb(stackb);
		pb(stacka, stackb);
	}
	return (-1);
}

int	use_rrr_type(t_stack **stacka, t_stack **stackb, int nbr, char stack_type)
{
	if (stack_type == 'a')
	{
		while ((*stackb)->stack[0] != nbr
			&& findingindexinstacka(*stacka, nbr) > 0)
			rrr(stacka, stackb);
		while ((*stackb)->stack[0] != nbr)
			rrb(stackb);
		while (findingindexinstacka(*stacka, nbr) > 0)
			rra(stacka);
		pa(stacka, stackb);
	}
	else if (stack_type == 'b')
	{
		while ((*stacka)->stack[0] != nbr
			&& findingindexinstackb(*stackb, nbr) > 0)
			rrr(stacka, stackb);
		while ((*stacka)->stack[0] != nbr)
			rra(stacka);
		while (findingindexinstackb(*stackb, nbr) > 0)
			rrb(stackb);
		pb(stacka, stackb);
	}
	return (-1);
}
