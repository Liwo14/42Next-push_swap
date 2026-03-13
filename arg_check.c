/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/13 10:18:24 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t char_check(char **argv, ssize_t index)
{
    ssize_t i;

    i = 0;
    while (argv[index][i]) 
    {
        if (argv[index][i] == '-' )
            i++;
        else if  (argv[index][i] == ' ' )
            i++;
        else if ((argv[index][i]  < '0') || (argv[index][i]  > '9'))
            return (debugg(0));
        else 
            i++;
    }
    return (0);
}
ssize_t check_instruct(char **argv)
{
    if ((argv[1][0] == '-') && (argv[1][1] == '-'))
    {
        if (char_check(argv, 2) == -1)
            return (-1);
        return (parse_instruct(argv, 1));
    }
    else
    {
        if (char_check(argv, 1) == -1)
            return (-1);
        return (parse_instruct(argv, 2));
    }
}
ssize_t check_input(int argc, char **argv)
{
    ssize_t checker;
    ssize_t strategy;
    
    strategy = 0;
    checker = 0;
    if (argc > 3 || argc < 2)
        return (debugg(3));
    if (argc == 2)
    {
        strategy = 4;
        if (char_check(argv, 1) == -1)
            return (-1);
    }
    else if (argc == 3)
    {
        if ((argv[1][0] == '-') && (argv[1][1] == '-'))
            checker++;
        if ((argv[2][0] == '-') && (argv[2][1] == '-'))
            checker++;
        if (checker != 1)
            return (debugg(2));
        strategy = check_instruct(argv); 
    }
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