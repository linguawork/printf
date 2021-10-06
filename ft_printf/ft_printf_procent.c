/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_procent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:58:48 by areggie           #+#    #+#             */
/*   Updated: 2021/01/25 14:55:50 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_printf_procent_nullsandzeros(t_set *set)
{
	int		len;

	len = 1;
	if (set->g_minus == 0 && set->g_width > 0 && set->g_zero == 0)
	{
		while (set->g_width > len)
		{
			ft_putchar(' ', set);
			set->g_width--;
		}
		ft_putchar('%', set);
	}
	if (set->g_minus == 0 && set->g_width > 0 && set->g_zero == 1)
	{
		while (set->g_width > len)
		{
			ft_putchar('0', set);
			set->g_width--;
		}
		ft_putchar('%', set);
	}
}

void		ft_printf_procent(t_set *set)
{
	int		len;

	len = 1;
	if ((set->g_minus == 1 && set->g_width == 0) || \
		(set->g_minus == 0 && set->g_width == 0))
		ft_putchar('%', set);
	if (set->g_minus == 1 && set->g_width > 0)
	{
		ft_putchar('%', set);
		while (set->g_width > len)
		{
			ft_putchar(' ', set);
			set->g_width--;
		}
	}
	ft_printf_procent_nullsandzeros(set);
}
