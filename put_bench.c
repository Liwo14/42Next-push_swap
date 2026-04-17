/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_bench.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:22:21 by arde-ass          #+#    #+#             */
/*   Updated: 2026/04/17 15:51:50 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_bench(void)
{
	ssize_t	arr[11];
	ssize_t	total;
	ssize_t	i;

	total = 0;
	i = 0;
	while (arr)
	{
		arr[i] = parse_count(i, 1);
		total += arr[i];
		i++;
	}
	ft_printf("[bench] total_ops: %d\n", total);
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n", arr[0], arr[1],
		arr[2], arr[3], arr[4]);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n", arr[5],
		arr[6], arr[7], arr[8], arr[9], arr[10]);
}
