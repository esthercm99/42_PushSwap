/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:56:26 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/24 01:31:19 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/moves/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = get_bottom(*stack);
	tmp->next = NULL;
	tail->next = tmp;
}

/*
	Top number goes to bottom of Stack A.
*/
void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr("ra\n");
}

/*
	Top number goes to bottom of Stack B.
*/
void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr("rb\n");
}

/*
	Run ra and rb at the same time.
*/
void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
