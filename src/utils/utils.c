/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastane <ecastane@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:50:25 by ecastane          #+#    #+#             */
/*   Updated: 2023/10/24 01:28:20 by ecastane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

/*   
    Writes "Error\n" to the standard output after freeing stack a and b.
    Exits with standard error code 1. 
*/
void	error_exit(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

/*   
    Converts an alphanumeric string of characters into a long integer.
*/
long int	ft_atoi(const char *str)
{
	long int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			np = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (np * num);
}

/*
    Prints a given string of characters to the standard output.
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
	Determines the length of string excluding the ending null character. 
	The function returns the length of string.
*/
size_t	ft_strlen(const char *str)
{
	size_t		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}


/* 
    Returns the absolute value of a number,
    which is the value without any sign consideration.
*/
int	absolute_number(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
