/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:16:48 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 08:51:14 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    ssize_t strategy;
    int list_index;
    char **list;
    char *str;

    list_index = 1;
    if ((argc == 3) && ((argv[1][0] == '-') && (argv[1][1] == '-')))
        list_index == 2;
    strategy = 0;
    strategy = check_input(argc, argv, list_index);
    if (strategy == -1 || strategy == 0)
        exit (1);
    ft_printf("Strategy is %d", strategy);
    str = clean_list(argv, list_index);
    list = split(str, ' ');
    if (check_dup(list) == -1)
        exit (-1);
   return (0);
}
