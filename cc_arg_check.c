/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_arg_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:05:52 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/20 09:24:09 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_push_swap.h"

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
    if (argc == 3)
    {
        if ((argv[1][0] == '-') && (argv[1][1] == '-'))
            list_index = 2;
    }
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

char *clean_list(char **argv, ssize_t list_index)
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

ssize_t check_list(char **list)
{
    size_t i;
    size_t j;
    ssize_t nb;

    i = 0;
    j = 1;
    while (list[j] != NULL)
    {
        if (ft_strcmp(list[i], list[j]) != -1)
            return(debugg(6));
        j++;
        i++;
    }
    i = 0;
    while (list[i] != NULL)
    {
        if (ft_strlen(list[i]) > 11)
            return(debugg(7));
        nb = ft_atoi(list[i]);
        if (nb > 2147483647 || nb < -2147483648)
            return(debugg(7));
        ft_printf("nb = %d\n", nb);
        i++;
    }
    return(1);
}

