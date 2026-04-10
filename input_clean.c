/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/10 08:04:28 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static ssize_t	clean_string(char *clean_list, const char *list)
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
		if ((list[i] == '-' && list[i + 1] == '\0') || (list[i] == '-' && list[i
				+ 1] == ' ') || (list[i] == ' ' && list[i + 1] == ' ')
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

char	*clean_list(char **argv, ssize_t list_index)
{
	char *tmp;
	char *clean_str;
	ssize_t len;

	len = ft_strlen(argv[list_index]);
	tmp = malloc(sizeof(char) * len + 1);
	tmp[len] = '\0';
	len = clean_string(tmp, argv[list_index]);
	if (len == -1)
	{
		free(tmp);
		debugg(5);
		exit(1);
	}
	clean_str = malloc(sizeof(char) * len + 1);
	clean_string(clean_str, tmp);
	free(tmp);
	return (clean_str);
}