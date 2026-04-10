/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 07:15:57 by arde-ass          #+#    #+#             */
/*   Updated: 2026/04/10 08:04:47 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*simple_sort(t_stack *head)
{
	t_stack *max_node;

	if (!head || !head->next || head->next->next == head)
		return (head);
	max_node = get_max_node(head);
	if (head == max_node)
	{
		ra(&head);
	}
	else if (head->next == max_node)
	{
		rra(&head);
	}
	if (head->index > head->next->index)
	{
		sa(&head);
	}
	return (head);
}