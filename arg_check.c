/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 10:18:21 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t find_list(int argc, char **argv)
{
    ssize_t list_index;
    
    list_index = 1;
    if (argc > 3 || argc < 2)
        return (debugg(3));
    if (argv[1][0] == '\0')
        return (debugg(4));
    if ((argc == 3) && (argv[2][0] == '\0'))
        return (debugg(4));
    if ((argc == 3) && ((argv[1][0] == '-') && (argv[1][1] == '-')))
        list_index == 2;
    return (list_index);
}

ssize_t check_input(int argc, char **argv, ssize_t list_index)
{
    ssize_t checker;
    ssize_t strategy;
    
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

char *clean_list(const char **argv, ssize_t list_index)
{
    char *tmp;
    char *clean_str;
    size_t j;
    size_t len;

    len = ft_strlen(argv[list_index]);
    tmp = malloc(sizeof(char) * len + 1);
    tmp[len] = '\0';
    len = clean_string(&tmp, argv[list_index]);
    clean_str = malloc(sizeof(char) * len + 1);
    clean_string(&clean_str, &tmp);
    free(tmp);
    return (clean_str);
}



/*
check_dup()
{
    
}
*/