/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:57:37 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/24 01:31:19 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/moves/push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*top;

	tmp = *stack;
	*stack = (*stack)->next;
	top = get_top(*stack);
	tmp->next = NULL;
	top->next = tmp;
}

/*
	Bottom number goes to top of Stack A.
*/
void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr("rra\n");
}

/*
	Bottom number goes to top of Stack B.
*/
void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr("rrb\n");
}

/*
	Run rra and rrb at the same time.
*/
void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr("rrr\n");
}
