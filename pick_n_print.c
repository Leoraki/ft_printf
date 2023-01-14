/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_n_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:55:43 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/13 23:23:00 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

//		ret += pick_n_print(conv, i, format)
int	pick_n_print(/*va_list conv, */int i, const char *format)
{
	printf("found a format specifier :\n");
	ft_putchar_fd(format[i + 1], 1);
	printf("\n");
	i++;
	return (i);
}


// PSEUDOCODE:

// Switch_n_print
// {
// 	use if and else if to return what has to be printed depending on the format specifier
// 	{
		
// 	}
// 	ELSE print the string

// }

