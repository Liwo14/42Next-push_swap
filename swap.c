/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 04:38:01 by arde-ass          #+#    #+#             */
/*   Updated: 2026/04/17 09:09:47 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **head)
{
	ssize_t	tmp_val;
	ssize_t	tmp_idx;

	if (!head || !*head || (*head)->next == *head)
		return ;
	tmp_val = (*head)->value;
	tmp_idx = (*head)->index;
	(*head)->value = (*head)->next->value;
	(*head)->index = (*head)->next->index;
	(*head)->next->value = tmp_val;
	(*head)->next->index = tmp_idx;
}

void	sa(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
	count_s('a', 0);
}

void	sb(t_stack **b)
{
	swap(b);
	write(1, "sb\n", 3);
	count_s('b', 0);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
	count_s('s', 0);
}
