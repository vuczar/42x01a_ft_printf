/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 21:36:08 by vimauric          #+#    #+#             */
/*   Updated: 2026/08/08 21:39:58 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
	int	i;
	int	total;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}