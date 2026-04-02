/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:08:18 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/02 07:00:14 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static ssize_t check_list(char **list)
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
void init(char **argv, ssize_t list_index)
{
    char **list;
    char *str;

    str = clean_list(argv, list_index);
    ft_printf("Clean str is :%s.\n", str);
    list = split(str, ' ');
    if (check_list(list) == -1)
        exit(1);
}
/*
static void init_list()
{
    
}
*/
