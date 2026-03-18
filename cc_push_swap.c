/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:16:48 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/18 10:49:22 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_push_swap.h"

int	main(int argc, char **argv)
{
    ssize_t strategy;
    ssize_t list_index;
    char **list;
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
    list = split(str, ' ');
    if (check_list(list) == -1)
        return (-1); 
    return (0);
}
