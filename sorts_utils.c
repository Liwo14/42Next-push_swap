/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 09:13:25 by arde-ass          #+#    #+#             */
/*   Updated: 2026/04/10 08:04:50 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_min_node(t_stack *head)
{
	t_stack	*min_node;
	t_stack	*tmp;

	if (!head)
		return (NULL);
	min_node = head;
	tmp = head->next;
	while (tmp != head)
	{
		if (tmp->value < min_node->value)
			min_node = tmp;
		tmp = tmp->next;
	}
	return (min_node);
}

t_stack	*get_max_node(t_stack *head)
{
	t_stack	*max_node;
	t_stack	*tmp;

	if (!head)
		return (NULL);
	max_node = head;
	tmp = head->next;
	while (tmp != head)
	{
		if (tmp->value > max_node->value)
			max_node = tmp;
		tmp = tmp->next;
	}
	return (max_node);
}

int	get_stack_size(t_stack *head)
{
	t_stack	*tmp;
	int		i;

	if (!head)
		return (0);
	tmp = head->next;
	i = 1;
	while (tmp != head)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
