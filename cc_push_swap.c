/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:16:48 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 10:47:10 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    ssize_t strategy;
    ssize_t list_index;
    //char **list;
    char *str;

    list_index = find_list(argc, argv);
    if (list_index == -1)
        exit (1);
    strategy = check_input(argc, argv, list_index);
    if (strategy == -1 || strategy == 0)
        exit (1);
    ft_printf("Strategy is %d \n", strategy);
    str = clean_list(argv, list_index);
    ft_printf("Clean str is :%s.\n", str);
    return (0);
    //list = split(str, ' ');
    
    //if (check_dup(list) == -1)
    //    exit (-1);
    //return (0);
}
