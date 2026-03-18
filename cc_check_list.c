/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:55:15 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/18 12:55:50 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_push_swap.h"

ssize_t check_list(char **list)
{
	if (check_dup(list) == -1 || (check_min_max(list) == -1))
    {
        free(list);
        return (-1); 
    }
    return (1);
}
//                                                                                                                                  max == 2 1 4 7 4 8 3 6 4 7
// min == -2147483648
    
ssize_t check_min_max(char **list)
{
    size_t i;
    size_t j;

    i = 0;
    while (list[i] != NULL)
    {
        j = 0;
        if (list[i][0] == '-')
            j = 1;
        if (ft_strlen(list[i]) > (10 + j))
            return (debugg(7));
        if (ft_strlen(list[i]) == (10 + j))
        {
            if (is_it_too_long(list[i], j) == -1)
                return (-1);
        }
        i++;
        
    }
    return(1);
}

ssize_t is_it_too_long(char *list, size_t i)
{
    if (list[0 + i] > '2')
        return (debugg(7));
    else if (list[0 + i] == '2')
        if (list[1 + i] > '1')
            return (debugg(7));
        else if (list[1 + i] == '1')
            if (list[2 + i] > '4')
                return (debugg(7));
            else if (list[2 + i] == '4')
                if (list[3 + i] > '7')
                    return (debugg(7));
                else if (list[3 + i] == '7')
                    if (list[4 + i] > '4')
                        return (debugg(7));
                    else if (list[4 + i] == '4')
                        if (list[5 + i] > '8')
                            return (debugg(7));
                        else if (list[5 + i] == '8')
                            if (list[6 + i] > '3')
                                return (debugg(7));
                            else if (list[6 + i] == '3')
                                if (list[7 + i] > '6')
                                    return (debugg(7));
                                else if (list[7 + i] == '6')
                                    if (list[8 + i] > '4')
                                        return (debugg(7));
                                    else if (list[8 + i] == '4')
                                        if (list[9 + i] > '7')
                                            return (debugg(7));
    return (1);
}


ssize_t check_dup(char **list)
{
    size_t i;
    size_t j;

    i = 0;
    j = 1;
    while (list[j] != NULL)
    {
        if (ft_strcmp(list[i], list[j]) != -1)
            return(debugg(6));
        j++;
        i++;
    }
    return(1);
}
