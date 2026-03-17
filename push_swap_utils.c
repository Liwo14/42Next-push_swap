/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:59:28 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 08:57:03 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t debugg(ssize_t nb)
{
    if (nb == 0)
        ft_printf("error : arg in list is not a number\n");
    else if (nb == 1)
        ft_printf("error : instruct is invalid\n");
    else if (nb == 2)
        ft_printf("error : two args, but not exactly one instruct\n");
    else if (nb == 3)
        ft_printf("error : arg count wrong\n");
    else if (nb == 4)
        ft_printf("error : \n");
    else if (nb == 5)
        ft_printf("error : \n");
    else if (nb == 6)
        ft_printf("error : \n");
    else if (nb == 7)
        ft_printf("error : \n");
    else if (nb == 8)
        ft_printf("error : \n");
    else if (nb == 9)
        ft_printf("error : \n");
    else if (nb == 10)
        ft_printf("error\n");
    return (-1);
}

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}