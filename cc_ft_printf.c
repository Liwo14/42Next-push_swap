/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_ft_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolnat <ccolnat@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 08:28:44 by ccolnat           #+#    #+#             */
/*   Updated: 2026/03/18 10:00:24 by ccolnat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_push_swap.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_puthex(unsigned int n, char base_type)
{
	int		count;
	char	*base;

	count = 0;
	if (base_type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex(n / 16, base_type);
	count += ft_putchar(base[n % 16]);
	return (count);
}


int	ft_parse(char arg_type, va_list args)
{
	int	count;

	count = 0;
	if (arg_type == '%')
		count += ft_putchar('%');
	else if (arg_type == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (arg_type == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (arg_type == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (arg_type == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (arg_type == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (arg_type == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (arg_type == 'x')
		count += ft_puthex(va_arg(args, unsigned int), arg_type);
	else if (arg_type == 'X')
		count += ft_puthex(va_arg(args, unsigned int), arg_type);
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
			count += ft_parse(input[++i], args);
		else
			count += ft_putchar(input[i]);
		i++;
	}
	return (count);
}
