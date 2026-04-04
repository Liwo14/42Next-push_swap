/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 07:34:00 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/04 08:03:49 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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

static size_t disorder_level(t_stack **stack_a)
{
    size_t mistakes;
    size_t pairs;
    size_t strategy;
    t_stack *current;
    
    mistakes = 0;
    pairs = 0;
    if (!stack_a || *stack_a)
        return (0);
    current = *stack_a;
    while (current != NULL && current->next != NULL)
    {
        pairs ++;
        if ((current->value) > (current->next->value))
            mistakes ++;
        current = current->next;
    }
    if (pairs / mistakes < 0.2)
        strategy = 1;
    else if (pairs / mistakes > 0.5)
        strategy = 3;
    else 
        strategy = 2;
    return (strategy);
}

void push_swap(t_stack **stack_a, t_stack **stack_b, ssize_t strategy)
{
    if (strategy == 4)
        strategy = disorder_level(&stack_a);
}

