/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 11:35:06 by vimauric          #+#    #+#             */
/*   Updated: 2026/08/20 22:08:33 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_puthex(unsigned int n);
int ft_puthex_upper(unsigned int n);
int ft_ptr(void *p);
int ft_putunsigned(unsigned int n);
int ft_putptr(unsigned long n);

#endif