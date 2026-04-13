/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 07:15:57 by arde-ass          #+#    #+#             */
/*   Updated: 2026/04/13 09:18:30 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack **head)
{
	t_stack	*max_node;

	if (!head || !*head || (*head)->next == *head
		|| (*head)->next->next == *head)
		return ;
	max_node = get_max_node(*head);
	if (*head == max_node)
		ra(head);
	else if ((*head)->next == max_node)
		rra(head);
	if ((*head)->index > (*head)->next->index)
		sa(head);
}

t_stack	*simple_sort(t_stack *head)
{
	t_stack	*stack_b;
	int		size;
	int		target_idx;

	stack_b = NULL;
	target_idx = 0;
	size = get_stack_size(head);
	while (size > 3)
	{
		if (direction(head, target_idx, size / 2))
			while (head->index != (size_t)target_idx)
				ra(&head);
		else
			while (head->index != (size_t)target_idx)
				rra(&head);
		pb(&head, &stack_b);
		target_idx++;
		size--;
	}
	sort_three(&head);
	while (stack_b)
		pa(&head, &stack_b);
	return (head);
}
