/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:58:27 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/24 01:31:19 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/moves/push_swap.h"

static void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

/*
	Send top of B to top of A.
*/
void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr("pa\n");
}

/*
	Send top of A to top of B.
*/
void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr("pb\n");
}
