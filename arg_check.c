/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 07:35:26 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t char_check(char **argv, int list_index)
{
    ssize_t i;

    i = 0;
    while (argv[list_index][i]) 
    {
        if (argv[list_index][i] == '-' )
            i++;
        else if  (argv[list_index][i] == ' ' )
            i++;
        else if ((argv[list_index][i]  < '0') || (argv[list_index][i]  > '9'))
            return (debugg(0));
        else 
            i++;
    }
    return (0);
}

ssize_t check_input(int argc, char **argv, int list_index)
{
    ssize_t checker;
    ssize_t strategy;
    
    strategy = 4;
    checker = 0;
    if (argc > 3 || argc < 2)
        return (debugg(3));
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
        return (-1); 
    return (strategy);
    
}

char **split_correct_input(const char *str, char c)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	if (str == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(str, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (str[j] != '\0')
	{
		while (str[j] != '\0' && str[j] == c)
			j++;
		if (str[j] != '\0')
		{
			if (ft_add_word(tab, i, &str[j], c) == 0)
				return (NULL);
			i++;
			go_to_next(str, &j, c);
		}
	}
	tab[i] = NULL;
	return (tab);
}
/*
check_dup()
{
    
}
*/