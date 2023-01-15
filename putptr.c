/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:36:46 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/15 20:38:56 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	dec_to_hex_p(unsigned long num)
{
	int	t;

	if (num < 16)
	{
		if (num < 10)
			return (putnbr_with_itoa(num));
		else
			return (ft_putchar_fd ((num + 87), 1));
	}
	else
	{
		t = num % 16;
		dec_to_hex_p(num / 16);
		if (t < 10)
			return (putnbr_with_itoa(t));
		else
			return (ft_putchar_fd((t + 87), 1));
	}
}

static int	counter_hex_p(unsigned long num)
{
	if (num < 16)
		return (1);
	else
		return (1 + counter_hex_p(num / 16));
}

int	putptr(unsigned long ptr)
{
	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	ft_putstr_fd("0x", 1);
	dec_to_hex_p(ptr);
	return (counter_hex_p(ptr) + 2);
}
