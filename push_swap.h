/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 09:21:05 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/10 08:48:23 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	size_t			value;
	size_t			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void				init(char **argv, ssize_t list_index, t_stack **stack_a,
						t_stack **stack_b);
void				push_swap(t_stack **stack_a, t_stack **stack_b,
						ssize_t strategy);
void				add_bottom(t_stack **stack, t_stack *new);
void				fill_index(t_stack *stack, size_t list_size);

ssize_t				check_input(int argc, char **argv, ssize_t list_index);
ssize_t				ft_strcmp(const char *s1, const char *s2);
ssize_t				ft_atoi(const char *str);
ssize_t				debugg(ssize_t nb);

char				*clean_list(char **argv, ssize_t list_index);
char				**split(char *str, char c);

int					ft_printf_parse(char arg_type, va_list args);
int					ft_printf(const char *input, ...);
int					get_stack_size(t_stack *head);
int					ft_putchar(char c);

t_stack				*fill_value(char **list, size_t list_size);
t_stack				*get_min_node(t_stack *head);
t_stack				*get_max_node(t_stack *head);
t_stack				*complex_sort(t_stack *head);
t_stack				*medium_sort(t_stack *head);
t_stack				*simple_sort(t_stack *head);
t_stack				*new_stack(size_t value);

size_t				ft_strlen(char const *str);

#endif