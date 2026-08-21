/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:07:31 by vimauric          #+#    #+#             */
/*   Updated: 2026/08/20 22:08:04 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(void *p)
{
	int	count;
	
	count = 0;
	if (!p)
		return(ft_putstr("(nill)"));
	count += ft_putstr("0x");
	count += ft_putptr((unsigned long)p);
	return (count);
}