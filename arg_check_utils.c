/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:08:07 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/13 10:37:16 by ccolnat          ###   ########.fr       */
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
ssize_t parse_instruct(char **argv, ssize_t index)
{
    if (ft_strcmp(argv[index], "--simple") == 1)
        return (1);
    else if (ft_strcmp(argv[index], "--medium") == 1)
        return (2);
    else if (ft_strcmp(argv[index], "--complex") == 1)
        return (3);
    else if (ft_strcmp(argv[index], "--adaptative") == 1)
        return (4);
    else
        return(debugg(1));
}
char *clean_str(const char **argv)
{
    char *tmp;
    char *clean_str;
    size_t i;
    size_t j;
    size_t size;

    i = 1;
    if ((argv[1][0] == '-') && (argv[1][1] == '-'))
        i = 2;
    size = ft_strlen(argv[i]);
    tmp = malloc(sizeof(char) * size + 1);
    
    return (clean_str);
}
