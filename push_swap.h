/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:21:05 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/13 08:33:33 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "printf/ft_printf.h"

ssize_t parse_instruct(char **argv, ssize_t index);
ssize_t	ft_strcmp(const char *s1, const char *s2);
ssize_t char_check(char **argv, ssize_t index);
ssize_t check_input(int argc, char **argv);
ssize_t check_instruct(char **argv);
ssize_t debugg(ssize_t nb);
//split_correct_input()
//check_dup()
#endif