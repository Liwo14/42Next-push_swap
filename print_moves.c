/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:04:16 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/17 15:57:47 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_write(ssize_t instruct)
{
	if (instruct == 1)
		write(1, "sa\n", 3);
	if (instruct == 2)
		write(1, "sb\n", 3);
	if (instruct == 3)
		write(1, "ss\n", 3);
	if (instruct == 4)
		write(1, "pa\n", 3);
	if (instruct == 5)
		write(1, "pb\n", 3);
	if (instruct == 6)
		write(1, "ra\n", 3);
	if (instruct == 7)
		write(1, "rb\n", 3);
	if (instruct == 8)
		write(1, "rr\n", 3);
	if (instruct == 9)
		write(1, "rra\n", 4);
	if (instruct == 10)
		write(1, "rrb\n", 4);
	if (instruct == 11)
		write(1, "rrr\n", 4);
}

void	write_instruct(ssize_t instruct, ssize_t mode)
{
	static ssize_t	count_state;

	if (mode == -1)
	{
		count_state == 1;
		return ;
	}
	parse_write(instruct);
	if (count_state == 1)
		parse_count(instruct, mode);
}
