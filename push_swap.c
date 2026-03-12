/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:16:48 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/12 13:03:04 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    ssize_t strategy;
    char **list;

    strategy = 0;
    strategy = check_input(argc, argv);
    if (strategy == -1 || strategy == 0)
        exit (1);
    list = split_correct_input(argv);
    if (check_dup(list) == -1)
        exit (-1);
    
}
