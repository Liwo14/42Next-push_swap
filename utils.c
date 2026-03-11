/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:59:28 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/11 14:19:09 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int error(void)
{
    ft_printf("Error");
    return (1);
}
ssize_t	ft_strcmp(const char *s1, const char *s2)
{
	ssize_t	i;

	i = 0;
	if ((s1[0] == '\0') || (s2[0] == '\0'))
        return (-1);
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return (-1);
	}
    if ((s1[i] == '\0') && (s2[i] == '\0'))
        return (1);
    else
	    return (-1);
}