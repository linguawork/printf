/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:30:26 by areggie           #+#    #+#             */
/*   Updated: 2021/02/01 13:52:39 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void		specialcases_p(int len, t_set *set)
{
	if (set->g_dot < len && set->g_dot != -1)
		set->g_dot = len;
	if (set->minussign == 1 && set->g_width > 0)
		set->g_width--;
	if (set->g_minus == 1)
		set->g_zero = 0;
}

void		ifcases_p(int len, int zeros, t_set *set)
{
	if ((set->g_minus == 0 && set->g_width > 0 && set->g_dot >= 0 && \
	set->g_dot != -1) || (set->g_minus == 0 && set->g_width > 0 &&\
	set->g_dot < len && set->g_zero == 0))
		ft_print_ornulls(' ', set->g_width - zeros - len, set);
	if ((set->g_minus == 0 && set->g_zero == 1 && set->g_dot > len &&\
	set->g_dot > 0 && set->g_dot != -1)
	|| (set->g_dot > len && set->g_zero == 0 && set->g_dot != -1))
		ft_print_ornulls('0', zeros, set);
	if (set->g_minus == 0 && set->g_zero == 1 && set->g_dot == -1)
		ft_print_ornulls('0', set->g_width - zeros - len, set);
}

void		ft_printf_p(unsigned long long nbr, t_set *set)
{
	char	*str;
	char	*strox;
	int		zeros;
	int		len;

	zeros = 0;
	str = ft_llitoa(nbr, 16);
	if (set->g_dot == 0 && *str == '0')
		*str = '\0';
	strox = ft_strdup("0x");
	if (set->g_dot > set->g_width)
		ft_putstr(strox, ft_strlenp(strox), set);
	else
		str = ft_strjoin(strox, str);
	len = ft_strlenp(str);
	specialcases_p(len, set);
	if (set->g_dot > len && set->g_dot != -1)
		zeros = set->g_dot - len;
	ifcases_p(len, zeros, set);
	ft_putstr(str, len, set);
	if (set->g_minus == 1)
		ft_print_ornulls(' ', set->g_width - zeros - len, set);
	free(str);
	free(strox);
}
