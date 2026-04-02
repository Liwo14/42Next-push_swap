/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:16:48 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/02 07:57:10 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static ssize_t find_list(int argc, char **argv)
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

int main(int argc, char **argv)
{
    ssize_t list_index;
    ssize_t strategy;
    //t_stack *stack_a;
    //t_stack *stack_b;
    list_index = find_list(argc, argv);//OK
    strategy = check_input(argc, argv, list_index);//OK
    ft_printf("Strategy is %d \n", strategy);
    init(argv, list_index); //, &stack_a, &stack_b);
    //push_swap(&stack_a, &stack_b, strategy);
    return(0);
}
