/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:20:09 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/14 20:25:42 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>



// int   ft_printf(const char *, ...)
// {
// 	va_list	conv;
// 	const char cc;

// 	va_start(conv, "%s");//look for "%c" in conv ?
// 	cc = va_arg(conv, const char);
// 	ft_putstr_fd(cc, 1);

// 	va_end(conv);
// 	return (0);
// }

// write() is a function of type int 
//that returns the number of characters printed out.



int	ft_printf(const char *format, ...)
{
	//const char *check;
	unsigned int i;
	unsigned int ret;
	// char *s;
	va_list	conv;

	i = 0;
	ret = 0;
	va_start(conv, format);//initialize conv with function last fixed argument
	printf("\n ret before : %i \n", ret);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			i++;//format[i] is now on the format specifier
			ret += pick_n_print(conv, i, format);
			printf("\n ret in loop : %i \n", ret);
		}
		else
			ret += ft_putchar_fd(format[i], 1);
		i++;
	}
	printf("\n ret after : %i \n", ret);
	va_end(conv);
	return (ret);
	// write() is a function of type int 
//that returns the number of characters printed out = use strlen
}