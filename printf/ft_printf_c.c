/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:30:40 by areggie           #+#    #+#             */
/*   Updated: 2021/01/25 20:01:08 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_c(char c, t_set *set)
{
	int	len;

	len = 1;
	if ((set->g_minus == 1 && set->g_width == 0) ||\
	(set->g_minus == 0 && set->g_width == 0))
		ft_putchar(c, set);
	if (set->g_minus == 1 && set->g_width > 0)
	{
		ft_putchar(c, set);
		while (set->g_width > len)
		{
			ft_putchar(' ', set);
			set->g_width--;
		}
	}
	if (set->g_minus == 0 && set->g_width > 0)
	{
		while (set->g_width > len)
		{
			ft_putchar(' ', set);
			set->g_width--;
		}
		ft_putchar(c, set);
	}
}
