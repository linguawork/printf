/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:30:22 by areggie           #+#    #+#             */
/*   Updated: 2021/01/31 18:30:26 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ifcases_s1(int len, char *str, t_set *set)
{
	if ((set->g_minus == 1 && set->g_width > 0 && set->g_dot != -1) || \
	(set->g_minus == 1 && set->g_width > 0 && set->g_dot == -1) || \
	(set->g_minus == 1 && set->g_width == 0 && set->g_dot != -1))
	{
		ft_putstr(str, len, set);
		while (set->g_width > len)
		{
			ft_putchar(' ', set);
			set->g_width--;
		}
	}
	if ((set->g_minus == 0 && set->g_width == 0 && set->g_dot == -1) ||\
	(set->g_minus == 1 && set->g_width == 0 && set->g_dot == -1) ||\
	(set->g_minus == 0 && set->g_width == 0 && set->g_dot != -1))
		ft_putstr(str, len, set);
}

void		ifcases_s2(int len, char *str, t_set *set)
{
	if ((set->g_minus == 0 && set->g_width > 0 && set->g_dot != -1) ||\
	(set->g_minus == 0 && set->g_width > 0 && set->g_dot == -1 && \
	set->g_zero == 0))
	{
		while (set->g_width > len)
		{
			ft_putchar(' ', set);
			set->g_width--;
		}
		ft_putstr(str, len, set);
	}
	if (set->g_minus == 0 && set->g_width > 0 && set->g_dot == -1 && \
	set->g_zero == 1)
	{
		while (set->g_width > len)
		{
			ft_putchar('0', set);
			set->g_width--;
		}
		ft_putstr(str, len, set);
	}
}

void		ft_printf_s(char *str, t_set *set)
{
	int		len;

	if (str == NULL)
		str = "(null)";
	len = ft_strlenp(str);
	if (str == NULL)
		len = 6;
	if (set->g_dot < 0)
		set->g_dot = -1;
	if (set->g_dot != -1 && set->g_dot < len)
		len = set->g_dot;
	if (set->g_width < 0)
	{
		set->g_minus = 1;
		set->g_width *= -1;
	}
	ifcases_s1(len, str, set);
	ifcases_s2(len, str, set);
}
