/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 07:25:24 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/10 09:17:23 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_value(char **list, size_t list_size)
{
	t_stack	*stack_a;
	size_t	nb;
	size_t	i;

	stack_a = NULL;
	i = 0;
	while (i < list_size)
	{
		nb = ft_atoi(list[i]);
		add_bottom(&stack_a, new_stack(nb));
		i++;
	}
	return (stack_a);
}
/*
void	fill_index(t_stack *stack, size_t list_size)
{
	size_t	value;
	t_stack	*ptr;
	t_stack	*max;

	while (--list_size > 0)
	{
		ptr = stack;
		value = -2147483648;
		max = NULL;
		while (ptr)
		{
			if (ptr->value == -2147483648 && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				max = ptr;
				ptr = stack;
			}
			else
				ptr = ptr->next;
		}
		if (max != NULL)
			max->index = list_size;
	}
}
*/
void	fill_index(t_stack *stack, size_t list_size)
{
	t_stack	*ptr;
	t_stack	*highest;
	ssize_t	value;
	size_t	current_idx;

	if (!stack)
		return ;
	current_idx = list_size - 1;
	while (list_size > 0)
	{
		ptr = stack;
		highest = NULL;
		do {
			if (ptr->index == 0) 
			{
				if (highest == NULL || ptr->value > highest->value)
					highest = ptr;
			}
			ptr = ptr->next;
		} while (ptr != stack);

		if (highest != NULL)
		{
			highest->index = current_idx + 1;
		}
		current_idx--;
		list_size--;
	}
	ptr = stack;
	do {
		ptr->index -= 1;
		ptr = ptr->next;
	} while (ptr != stack);
}
