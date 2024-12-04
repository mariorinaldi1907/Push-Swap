/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:07:52 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:07:54 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_message(void)
{
	write(2, "Error\n", 6);
}

int	checkingerror(char **av, int ac)
{
	int	size;

	size = ac - 1;
	if (noduplicates(av + 1, size) == 1 || isnotint2(av + 1, size)
		|| isnotint1(av + 1, size) == 1 || largerthanint(av + 1, size) == 1)
		return (1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	stack = NULL;
	if (ac == 1)
		return (1);
	if (checkingerror(av, ac) == 1)
	{
		error_message();
		return (0);
	}
	stack = conversion(av, ac);
	if (stack == NULL)
		return (0);
	if (hasbeensorted(stack) == 1)
		return (0);
	else if (hasbeensorted(stack) == 0)
		sorting_algo(stack);
	free(stack->stack);
	free(stack);
	return (0);
}
//for (int i = 0; i < stack->size ; i++)
//printf("%d",stack->stack[i]);
