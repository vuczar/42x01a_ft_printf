/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimauric <vimauric@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 11:01:42 by vimauric          #+#    #+#             */
/*   Updated: 2026/07/03 11:09:02 by vimauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	print(int count, ...)
{
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}

int	main()
{
	print(3, 1, 2, 3);
	print(5, 10, 20, 30, 40, 50);
	return (0);
}
