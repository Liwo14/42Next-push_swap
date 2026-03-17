/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:21:05 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/17 08:10:30 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

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

int	ft_printf(const char *input, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_parse(char arg_type, va_list args);
int	ft_putptr(void *ptr);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned int n, char base_type);
//split_correct_input()
//check_dup()
#endif