/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:32:56 by vimauric          #+#    #+#             */
/*   Updated: 2026/08/05 17:39:53 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		total;
	int		i;
	
	va_start(args, format);
	if (!format)
		return (-1);
	i = 0;
	total = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (total);
}