/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/13 09:11:12 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static ssize_t	parse_instruct(char **argv, ssize_t list_index)
{
	size_t	instruct_index;

	if (list_index == 1)
		instruct_index = 2;
	else if (list_index == 2)
		instruct_index = 1;
	if (ft_strcmp(argv[instruct_index], "--simple") == 1)
		return (1);
	else if (ft_strcmp(argv[instruct_index], "--medium") == 1)
		return (2);
	else if (ft_strcmp(argv[instruct_index], "--complex") == 1)
		return (3);
	else if (ft_strcmp(argv[instruct_index], "--adaptive") == 1)
		return (4);
	else
		return (debugg(1));
}

static ssize_t	char_check(char **argv, ssize_t list_index)
{
	int	i;

	i = 0;
	while (argv[list_index][i] != '\0')
	{
		if (argv[list_index][i] == '-')
			i++;
		else if (argv[list_index][i] == ' ')
			i++;
		else if ((argv[list_index][i] < '0') || (argv[list_index][i] > '9'))
			return (-1);
		else
			i++;
	}
	return (0);
}

ssize_t	check_input(int argc, char **argv, ssize_t list_index)
{
	ssize_t	checker;
	ssize_t	strategy;

	strategy = 4;
	checker = 0;
	if (argc == 3)
	{
		if ((argv[1][0] == '-') && (argv[1][1] == '-'))
			checker++;
		if ((argv[2][0] == '-') && (argv[2][1] == '-'))
			checker++;
		if (checker != 1)
			return (debugg(2));
		strategy = parse_instruct(argv, list_index);
	}
	if (char_check(argv, list_index) == -1)
		return (debugg(0));
	return (strategy);
}
