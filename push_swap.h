/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:03:09 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/24 01:20:39 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

// Stack
t_stack		stack_new(int index, int number);
void		stack_add(int i, t_stack *stack, t_stack new_stack);
t_stack		*get_bottom(t_stack *stack);
t_stack		*before_bottom(t_stack *stack);
int			get_stack_size(t_stack	*stack);
void		free_stack(t_stack **stack);

void		get_index(t_stack *stack_a, int stack_size);
int			is_sorted(t_stack *stack);

// Push
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);

// Swap
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);

// Rotate
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);

// Reverse Rotate
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);

// Cost
void		cost(t_stack **stack_a, t_stack **stack_b);
void		cheapest_move(t_stack **stack_a, t_stack **stack_b);

// Logic
void		do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void		sort(t_stack **stack_a, t_stack **stack_b);
void		get_target_position(t_stack **stack_a, t_stack **stack_b);
int			position_lowest_index(t_stack **stack);
void		sort_three(t_stack **stack);

// Args
int			check_args(char **args, int argc);
long		input_is_correct(char *av);

// Utils
void		error_exit(t_stack **stack_a, t_stack **stack_b);
long int	ft_atoi(const char *str);
void		ft_putstr(char *str);
size_t		ft_strlen(const char *s);

int			absolute_number(int num);
char		**ft_split(char const *s, char c);
void		get_numbers(char *av, t_stack **stack_a);
int			is_duplicate(t_stack *column);

#endif