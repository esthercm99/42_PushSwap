/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:53:26 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/24 01:31:19 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/moves/push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

/*
	Swap top two numbers in Stack A.
*/
void	sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_putstr("sa\n");
}

/*
	Swap top two numbers in Stack B.
*/
void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_putstr("sb\n");
}

/*
	Run sa and sb at the same time.
*/
void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss\n");
}
