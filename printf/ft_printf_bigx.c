/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bigx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:05:26 by areggie           #+#    #+#             */
/*   Updated: 2021/01/31 18:38:52 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ifcasesbigx(int len, int zeros, t_set *set)
{
	if ((set->g_minus == 0 && set->g_width > 0 && set->g_dot >= 0 &&\
		set->g_dot != -1 && !(set->g_dot < 0))
	|| (set->g_minus == 0 && set->g_width > 0 && set->g_dot < len &&\
	set->g_zero == 0))
		ft_print_ornulls(' ', set->g_width - zeros - len, set);
	if ((set->g_minus == 0 && set->g_zero == 1 && set->g_dot > len &&\
	set->g_dot > 0 && set->g_dot != -1)
	|| (set->g_minus == 1 && set->g_zero == 0 && set->g_dot > len &&\
	set->g_dot > 0 && set->g_dot != -1)
	|| (set->g_minus == 0 && set->g_zero == 0 && set->g_dot > len &&\
	set->g_dot > 0 && set->g_dot != -1))
		ft_print_ornulls('0', zeros, set);
	if ((set->g_minus == 0 && set->g_zero == 1 && set->g_dot == -1)
	|| (set->g_minus == 0 && set->g_zero == 1 && (set->g_dot < -1)))
		ft_print_ornulls('0', set->g_width - zeros - len, set);
}

void		ft_printf_bigx(unsigned long nbr, t_set *set)
{
	char	*str;
	int		len;
	int		zeros;

	zeros = 0;
	str = ft_itoabigx(nbr, 16);
	if (set->g_width < 0)
		set->g_width *= -1;
	if (set->g_dot == 0 && *str == '0')
		*str = '\0';
	len = ft_strlenp(str);
	if (set->g_dot < len && set->g_dot != -1 && !(set->g_dot < 0))
		set->g_dot = len;
	if (set->minussign == 1 && set->g_width > 0)
		set->g_width--;
	if (set->g_minus == 1)
		set->g_zero = 0;
	if (set->g_dot > len && set->g_dot != -1)
		zeros = set->g_dot - len;
	ifcasesbigx(len, zeros, set);
	ft_putstr(str, len, set);
	if (set->g_minus == 1)
		ft_print_ornulls(' ', set->g_width - zeros - len, set);
	free(str);
}
