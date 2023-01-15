/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_n_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:55:43 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/15 20:49:07 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pick_n_print(va_list conv, int i, const char *format)
{
	if (format[i] == 'c')
		return (ft_putchar_fd(va_arg(conv, int), 1));
	else if (format[i] == 's')
		return (ft_putstr_fd(va_arg(conv, char *), 1));
	else if (format[i] == 'p')
		return (putptr(va_arg(conv, unsigned long)));
	else if (format[i] == 'd' || format [i] == 'i')
		return (putnbr_with_itoa(va_arg(conv, int)));
	else if (format[i] == 'u')
		return (putunbr_with_itoa(va_arg(conv, unsigned int)));
	else if (format[i] == 'x')
		return (dec_to_hex(va_arg(conv, unsigned int), "0123456789abcdef"));
	else if (format[i] == 'X')
		return (dec_to_hex(va_arg(conv, unsigned int), "0123456789ABCDEF"));
	else if (format[i] == '%')
		return (ft_putchar_fd('%', 1));
	else
		return (0);
}
