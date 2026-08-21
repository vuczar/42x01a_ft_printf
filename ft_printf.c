/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:32:56 by vimauric          #+#    #+#             */
/*   Updated: 2026/08/21 19:54:19 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char c, va_list args)
{
	int	total;

	total = 0;
	if (c == 'c')
		total += ft_putchar(va_arg(args, int));
	else if (c == 's')
		total += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		total += ft_handle_ptr(va_arg(args, void *));
	else if (c == 'd' | c == 'i')
		total += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		total += ft_putunsinged(va_arg(args, unsigned int));
	else if (c == 'x')
		total += ft_puthex(va_arg(args, unsigned int));
	else if (c == 'X')
		total += ft_puthex_upper(va_arg(args, unsigned int));
	else if (c == '%')
		total += ft_putchar('%');
	return (total);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total;
	int		i;

	if (!format)
		return (-1);
	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format == '%')
		{
			i++;
			if (format[i])
				total += ft_format(format[i], args);
		}
		else
			total += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (total);
}
