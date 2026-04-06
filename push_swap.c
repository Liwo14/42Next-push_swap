/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 07:34:00 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/06 07:53:28 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_strategy(size_t mistakes, size_t pairs)
{
	float	disorder;

	if (pairs == 0)
		return (1);
	disorder = (float)mistakes / (float)pairs;
	if (disorder < 0.2f)
		return (1);
	if (disorder >= 0.5f)
		return (3);
	return (2);
}

static int	disorder_level(t_stack *head)
{
	size_t			mistakes;
	size_t			pairs;
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

size_t stack_size(t_stack *stack)
{
    size_t size;
    
    size = 0;
    if (!stack)
        return(0);
    while (stack)
    {
        stack = stack->next;
        size++;
    }
    return (size);
}

void push_swap(t_stack **stack_a, t_stack **stack_b, ssize_t strategy)
{
    if (strategy == 4)
        strategy = disorder_level(&stack_a);
    if (strategy == 1)
        simple_sort(&stack_a);
    if (strategy == 2)
        medium_sort(&stack_a);
    if (strategy == 3)
        complex_sort(&stack_a);
}
