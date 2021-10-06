/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:05:19 by areggie           #+#    #+#             */
/*   Updated: 2021/01/26 20:06:09 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_printing(va_list ap, t_set *set)
{
	int		i;

	i = 0;
	if (set->g_type == 's')
		ft_printf_s(va_arg(ap, char *), set);
	else if (set->g_type == '%')
		ft_printf_procent(set);
	else if (set->g_type == 'x')
		ft_printf_x(va_arg(ap, unsigned int), set);
	else if (set->g_type == 'X')
		ft_printf_bigx(va_arg(ap, unsigned int), set);
	else if (set->g_type == 'd' || set->g_type == 'i')
		ft_printf_d(va_arg(ap, int), set);
	else if (set->g_type == 'p')
		ft_printf_p(va_arg(ap, unsigned long long), set);
	else if (set->g_type == 'c')
		ft_printf_c(va_arg(ap, int), set);
	else if (set->g_type == 'u')
		ft_printf_u(va_arg(ap, unsigned int), set);
}
