/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:03:23 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/13 17:10:01 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_numbers(char *argv, t_stack **stack_a)
{
	char		**param;
	long int	n;
	int			i;

	i = 0;
	param = ft_split(argv, ' ');
	while (param[i] != '\0')
	{
		if (check_args(param[i]))
		{
			n = ft_atoi(param[i]);
			if (n > INT_MAX || n < INT_MIN)
				error_exit(stack_a, NULL);
			stack_add(i, stack_a, stack_new(i, n));
		}
		else
			error_exit(NULL, NULL);
		free(param[i]);
		i++;
	}
	free(param);
}

int	main(int arg_c, char *argv)
{
	int		i;
	int		stack_size;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	check_args(argv, arg_c);
	return (0);
}