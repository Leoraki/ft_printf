/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:20:11 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/15 20:50:08 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		pick_n_print(va_list conv, int i, const char *arg);
int		dec_to_hex(unsigned int nbr, char *base);
int		putptr(unsigned long nbr);

#endif