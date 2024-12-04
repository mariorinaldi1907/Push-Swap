/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrinaldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:12:07 by nrinaldi          #+#    #+#             */
/*   Updated: 2024/04/29 13:12:12 by nrinaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define MAX_STACK 500

typedef struct s_stack
{
	int	*stack;
	int	size;
	int	nbr;
}	t_stack;

void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **tack_b);
void	push(t_stack **stack, int nbr);
int		pop(t_stack **stack);
void	ra(t_stack **stack);
void	rra(t_stack **stack);
void	rb(t_stack **stack);
void	rrb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ss(t_stack **stacka, t_stack **stackb);
void	sb(t_stack **stackb);
void	sa(t_stack **stacka);

int		checkingerror(char **av, int ac);
void	error_message(void);
int		noduplicates(char **av,	int size);
int		isnotint1(char **av, int size);
int		isnotint2(char **av, int size);
int		largerthanint(char **av, int size);

t_stack	*conversion(char **av, int ac);
t_stack	*process1(char **av);

int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
void	freesplit(char **str);

int		hasbeensorted(t_stack *stack);
void	sorting_algo(t_stack *stack_a);
void	sorting2(t_stack *stacka);
void	sorting3(t_stack **stacka);
void	sorting4(t_stack *stacka, t_stack *stackb);
void	sortingmorethan4(t_stack *stacka, t_stack *stackb);

int		smallest(t_stack *stack, int position);
int		largest(t_stack *stack, int position);
void	push1tob(t_stack *stacka, t_stack *stackb);

int		use_rr_type(t_stack **stacka, t_stack **stackb,
			int nbr, char stack_type);
int		use_rarrb_type(t_stack **stacka, t_stack **stackb,
			int nbr, char stack_type);
int		use_rrarb_type(t_stack **stacka, t_stack **stackb,
			int nbr, char stack_type);
int		use_rrr_type(t_stack **stacka, t_stack **stackb,
			int nbr, char stack_type);
int		rr_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type);
int		rrr_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type);
int		rarrb_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type);
int		rrarb_type(t_stack *stacka, t_stack *stackb, int nbr, char stack_type);
int		rotateina(t_stack *stacka, t_stack *stackb);
int		rotateinb(t_stack *stacka, t_stack *stackb);

int		findingindexinstacka(t_stack *stacka, int nbr);
int		findingindexinstackb(t_stack *stackb, int nbr);
int		maxvalue(t_stack *stack);
int		minvalue(t_stack *stack);
int		findindex(t_stack *stack, int nbr);

t_stack	**movefromb_backto_a(t_stack **stacka, t_stack **stackb);
t_stack	**movefroma_to_btill3left(t_stack **stacka, t_stack **stackb);
void	findcheapnbr_push(t_stack **stacka, t_stack **stackb);
void	rotate_push2_b(t_stack **stacka, t_stack **stackb, int count, int i);
void	rotate_push2_a(t_stack **stacka, t_stack **stackb, int count, int i);
void	ra_rraback(t_stack *stacka);

#endif
