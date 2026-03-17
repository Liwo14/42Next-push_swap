/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:08:07 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 08:02:48 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
ssize_t parse_instruct(char **argv, int list_index)
{
    int instruct_index;
    
    
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
        return(debugg(1));
}
char *clean_list(const char **argv, int list_index)
{
    char *tmp;
    char *clean_str;
    size_t j;
    size_t len;

    len = ft_strlen(argv[list_index]);
    tmp = malloc(sizeof(char) * len + 1);
    tmp[len] = '\0';
    
    return (clean_str);
}
