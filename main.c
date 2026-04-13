/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:42:23 by ccolnat           #+#    #+#             */
/*   Updated: 2026/04/13 11:52:19 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static ssize_t	find_list(int argc, char **argv)
{
	ssize_t	list_index;

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

static void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*next;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	(*stack)->prev->next = NULL;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*stack = NULL;
}

int	main(int argc, char **argv)
{
	ssize_t	list_index;
	ssize_t	strategy;
	t_stack	*stack_a;
	t_stack	*stack_b;

	list_index = find_list(argc, argv);
	if (list_index == -1)
		return (1);
	strategy = check_input(argc, argv, list_index);
	init(argv, list_index, &stack_a, &stack_b);
	if (strategy == 1)
	{
		if (stack_a->prev->prev == stack_a
			&& stack_a->value > stack_a->next->value)
		{
			write(1, "ra\n", 3);
			free_stack(&stack_a);
			return (0);
		}
	}
	push_swap(&stack_a, strategy);
	free_stack(&stack_a);
	return (0);
}
