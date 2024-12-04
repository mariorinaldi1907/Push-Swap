/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:39:51 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/24 13:39:59 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	freesplit(char **str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

t_stack	*process1(char **av)
{
	t_stack	*stacka;
	char	**extra;
	int		i;

	i = 0;
	extra = ft_split(av[1], ' ');
	stacka = (t_stack *)malloc(sizeof(t_stack));
	stacka->size = 0;
	stacka->stack = (int *)malloc((stacka->size) * sizeof(int));
	while (extra[i] != NULL)
	{
		stacka->stack[stacka->size++] = ft_atoi(extra[i]);
		i++;
	}
	freesplit(extra);
	return (stacka);
}

t_stack	*conversion(char **av, int ac)
{
	t_stack	*stack;
	int		i;

	i = 1;
	if (ac == 2)
		stack = process1(av);
	else
	{
		stack = (t_stack *)malloc(sizeof(t_stack));
		if (stack == NULL)
			return (NULL);
		stack->size = 0;
		stack->stack = (int *)malloc((ac - 1) * sizeof(int));
		if (stack->stack == NULL)
		{
			free(stack);
			return (NULL);
		}
		while (i < ac)
		{
			stack->stack[stack->size++] = ft_atoi(av[i]);
			i++;
		}
	}
	return (stack);
}
