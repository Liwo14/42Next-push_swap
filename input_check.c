/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/15 13:17:56 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	find_flag(char **argv)
{
	ssize_t	checker;
	ssize_t	i;
	ssize_t	j;

	checker = 0;
	i = 1;
	j = 0;
	{
		while (argv[i] != NULL)
		{
			if ((argv[i][0] == '-') && (argv[i][1] == '-'))
			{
				checker++;
				j = i;
			}
			i++;
		}
		if (checker > 1)
			return (debugg(1));
		return (j);
	}
}

static ssize_t	parse_instruct(char **argv, ssize_t flag_index)
{
	if (ft_strcmp(argv[flag_index], "--simple") == 1)
		return (1);
	else if (ft_strcmp(argv[flag_index], "--medium") == 1)
		return (2);
	else if (ft_strcmp(argv[flag_index], "--complex") == 1)
		return (3);
	else if (ft_strcmp(argv[flag_index], "--adaptive") == 1)
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

ssize_t	check_flag(int argc, char **argv)
{
	ssize_t	flag_index;
	ssize_t	strategy;

	flag_index = -1;
	strategy = 4;
	if (argc == 2)
		return (strategy);
	if (argc < 2)
		return (debugg(4));
	if (argc > 2)
	{
		flag_index = find_flag(argv);
		if (flag_index == -1)
			return (debugg(1));
		if (flag_index != 0)
			strategy = parse_instruct(argv, flag_index);
	}
	return (strategy);
}
