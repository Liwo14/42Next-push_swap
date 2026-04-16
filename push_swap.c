/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 07:34:00 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/16 07:18:05 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_strategy(size_t mistakes, size_t pairs)
{
	float	disorder;

	if (pairs <= 10)
		return (1);
	if (pairs <= 100 && mistakes < 25)
		return (1);
	else if (pairs <= 100 && mistakes > 25)
		return (2);
	disorder = (float)mistakes / (float)pairs;
	if (disorder < 0.2f)
		return (1);
	if (disorder >= 0.5f)
		return (3);
	return (2);
}

static int	disorder_level(t_stack *head)
{
	size_t	mistakes;
	size_t	pairs;
	t_stack	*current;
	t_stack	*compare;

	mistakes = 0;
	pairs = 0;
	if (!head || head->next == head)
		return (1);
	current = head;
	while (current->next != head)
	{
		compare = current->next;
		while (compare != head)
		{
			pairs++;
			if (current->value > compare->value)
				mistakes++;
			compare = compare->next;
		}
		current = current->next;
	}
	return (get_strategy(mistakes, pairs));
}

void	push_swap(t_stack **stack_a, ssize_t strategy)
{
	int test;
	
	test = is_sorted(*stack_a);
	ft_printf("test = %d\n", test);
	if (strategy == 4)
		strategy = disorder_level(*stack_a);
	ft_printf("strat is = %d\n",strategy);
	if (is_sorted(*stack_a) != 1)
	{
		if (strategy == 1)
			*stack_a = simple_sort(*stack_a);
		if (strategy == 2)
			*stack_a = medium_sort(*stack_a);
		if (strategy == 3)
			*stack_a = complex_sort(*stack_a);
	}
	if (is_sorted(*stack_a) != 1)
	{
		debugg(8);
		return ;
	}
}
