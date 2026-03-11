/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:16:48 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/11 14:19:03 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
    int strategy;

    strategy = 0;
	if (argc > 3)
        return (error());
    else if (argc == 1)
        return (error());
    if (argc == 2)
        strategy = disorder_picker(argv); //si on a que la liste, on choisit notre strategie en fonction du désordre (1 = simple 2 = medium 3 = high)
    else //donc argc == 3
        strategy = strategy_picker(argv); // on doit forcer une stratégie peut importe le désordre
    if (strategy == -1)
        return (error());

}