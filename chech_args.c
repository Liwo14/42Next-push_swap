/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chech_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 10:43:45 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/11 14:24:39 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t strategy_picker(char **argv)
{
    int i;
    i = 1;
    while (i != 3)
    {
        if ((argv[i][0] == '-') && (argv[i][1] == '-'))
        {
            if (ft_strcmp(argv[i], "--simple") == 1)
                return (1);
            else if (ft_strcmp(argv[i], "--medium") == 1)
                return (2);
            else if (ft_strcmp(argv[i], "--complex") == 1)
                return (3);
            else if (ft_strcmp(argv[i], "--adaptative") == 1)
                return (4);
            else
                return(error());
        }
        else
            i++;
    }
    return(error());
}
ssize_t disorder_picker(char **argv)
{
    ssize_t mistakes = 0;
    ssize_t total_pairs = 0;
    
    for i from 0 to size(a)-1:
        for j from i+1 to size(a)-1:
            total_pairs += 1
    if a[i] > a[j]:
        mistakes += 1
    return mistakes / total_pairs
}