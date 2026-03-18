/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_arg_check_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:08:07 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/18 09:17:24 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_push_swap.h"

ssize_t	char_check(char **argv, ssize_t list_index)
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

ssize_t	ft_strcmp(const char *s1, const char *s2)
{
	ssize_t	i;

	i = 0;
	if ((s1[0] == '\0') || (s2[0] == '\0'))
		return (debugg(10));
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (-1);
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (1);
	else
		return (debugg(10));
}

ssize_t	parse_instruct(char **argv, ssize_t list_index)
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
	else if (ft_strcmp(argv[instruct_index], "--adaptative") == 1)
		return (4);
	else
		return (debugg(1));
}

ssize_t	clean_string(char *clean_list, const char *list)
{
	ssize_t	i;
	ssize_t	j;

	i = 0;
	j = 0;
	while (list[i] == ' ')
		i++;
	while (list[i] != '\0')
	{
        if (list[i] != ' ' && list[i + 1] == '-')
            return (-1);
		if ((list[i] == '-' && list[i + 1] == '\0')
                || (list[i] == '-' && list[i + 1] == ' ')
                    || (list[i] == ' ' && list[i + 1] == ' ')
                        || (list[i] == ' ' && list[i + 1] == '\0'))
        i++;
		else
        {
			clean_list[j] = list[i];
		    j++;
		    i++;
        }
	}
	clean_list[j] = '\0';
	return (j - 1);
}
