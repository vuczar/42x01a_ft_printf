/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:25:58 by vimauric          #+#    #+#             */
/*   Updated: 2026/08/22 18:31:06 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsinged(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunsinged(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
