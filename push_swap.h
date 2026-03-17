/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:21:05 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 07:54:24 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "printf/ft_printf.h"

void	go_to_next(const char *str, int *j, char c);
static char	*ft_alloc_word(char const *str, char c);
static int	ft_count_words(const char *str, char c);
static int	ft_add_word(char **tab, int i, char const *str, char c);
ssize_t parse_instruct(char **argv, int list_index);
ssize_t	ft_strcmp(const char *s1, const char *s2);
ssize_t char_check(char **argv, int list_index);
ssize_t check_input(int argc, char **argv, int list_index);
ssize_t debugg(ssize_t nb);
size_t	ft_strlen(char const *str);
char **split_correct_input(const char *str, char c);
char *clean_list(const char *str);
//split_correct_input()
//check_dup()
#endif