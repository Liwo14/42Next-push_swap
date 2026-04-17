/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 09:13:02 by arde-ass          #+#    #+#             */
/*   Updated: 2026/04/17 09:51:32 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t  count_p(char flag, ssize_t instruct)
{
    static ssize_t  a;
    static ssize_t  b;
    static ssize_t  s;
    
    if (instruct == 0)
    {
        if (flag == 'a')
            a++;
        if (flag == 'b')
            b++;
        return (0);
    }
    if (instruct == 1)
    {
        if (flag == 'a')
            return (a);
        if (flag == 'b')
            return (b);
    }
    return (0);
}

ssize_t  count_r(char flag, ssize_t instruct)
{
    static ssize_t  a;
    static ssize_t  b;
    static ssize_t  r;
    
    if (instruct == 0)
    {
        if (flag == 'a')
            a++;
        if (flag == 'b')
            b++;
        if (flag == 'r')
            r++;
        return (0);
    }
    if (instruct == 1)
    {
        if (flag == 'a')
            return (a);
        if (flag == 'b')
            return (b);
        if (flag == 'r')
            return (r);
    }
    return (0);
}

ssize_t  count_rr(char flag, ssize_t instruct)
{
    static ssize_t  a;
    static ssize_t  b;
    static ssize_t  r;
    
    if (instruct == 0)
    {
        if (flag == 'a')
            a++;
        if (flag == 'b')
            b++;
        if (flag == 'r')
            r++;
        return (0);
    }
    if (instruct == 1)
    {
        if (flag == 'a')
            return (a);
        if (flag == 'b')
            return (b);
        if (flag == 'r')
            return (r);
    }
    return (0);
}

ssize_t  count_s(char flag, ssize_t instruct)
{
    static ssize_t  a;
    static ssize_t  b;
    static ssize_t  s;
    
    if (instruct == 0)
    {
        if (flag == 'a')
            a++;
        if (flag == 'b')
            b++;
        if (flag == 's')
            s++;
        return (0);
    }
    if (instruct == 1)
    {
        if (flag == 'a')
            return (a);
        if (flag == 'b')
            return (b);
        if (flag == 's')
            return (s);
    }
    return (0);
}
