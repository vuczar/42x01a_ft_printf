/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:07:31 by vimauric          #+#    #+#             */
/*   Updated: 2026/08/21 19:21:48 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *p)
{
	int	count;

	count = 0;
	if (!p)
		return (ft_putstr("(nill)"));
	count += ft_putstr("0x");
	count += ft_putptr((unsigned long)p);
	return (count);
}
