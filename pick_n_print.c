/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_n_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:55:43 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/15 14:13:41 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	pick_n_print(va_list conv, int i, const char *format)
{
	// printf("found a format specifier :\n");
	// ft_putchar_fd(format[i + 1], 1);
	// printf("\n");
	unsigned int ret;

	ret = 0;
	if(format[i] == 'c')
		ret += ft_putchar_fd(va_arg(conv, int), 1);
	if(format[i] == 's')
		ret += ft_putstr_fd(va_arg(conv, char *), 1);
//	else if(format[i] == 'p')
// • %p The void * pointer argument has to be printed in hexadecimal format.
//		ret += //UWAGA     TO      DO
	else if(format[i] == 'd'|| format [i] == 'i')
		ret += putnbr_with_itoa(va_arg(conv, int));
	else if(format[i] == 'u')
		ret += putUnbr_with_itoa(va_arg(conv, unsigned int));
	else if (format[i] == 'x')
		return (dec_to_hex(va_arg(conv, unsigned int), "0123456789abcdef"));
	else if (format[i] == 'X')
		return (dec_to_hex(va_arg(conv, unsigned int), "0123456789ABCDEF"));
	else if(format[i] == '%')
		ret += ft_putchar_fd('%', 1);
	// printf("\n nbr chars from PNP : %i \n", ret);
	return (ret);
}
