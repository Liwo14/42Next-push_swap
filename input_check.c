/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/15 14:04:14 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	find_flag(char **str)
{
	ssize_t	checker;
	ssize_t	i;
	ssize_t	j;

	checker = 0;
	i = 1;
	j = 0;
	{
		while (str[i] != NULL)
		{
			if ((str[i][0] == '-') && (str[i][1] == '-'))
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

static ssize_t	parse_instruct(char **str, ssize_t flag_index)
{
	if (ft_strcmp(str[flag_index], "--simple") == 1)
		return (1);
	else if (ft_strcmp(str[flag_index], "--medium") == 1)
		return (2);
	else if (ft_strcmp(str[flag_index], "--complex") == 1)
		return (3);
	else if (ft_strcmp(str[flag_index], "--adaptive") == 1)
		return (4);
	else
		return (debugg(1));
}

ssize_t	char_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			i++;
		else if (str[i] == ' ')
			i++;
		else if ((str[i] < '0') || (str[i] > '9'))
			return (debugg(0));
		else
			i++;
	}
	return (0);
}

ssize_t	check_flag(int argc, char **str)
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
		flag_index = find_flag(str);
		if (flag_index == -1)
			return (-1);
		if (flag_index != 0)
			strategy = parse_instruct(str, flag_index);
	}
	return (strategy);
}
