/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defwidth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:24:14 by areggie           #+#    #+#             */
/*   Updated: 2021/01/25 15:25:41 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_defwidth(char *str, va_list ap, t_set *set)
{
	int		i;

	i = 0;
	if (set->g_width != 0)
		return (set->g_width);
	if (str[i] == '*')
	{
		set->g_width = va_arg(ap, int);
		if (set->g_width < 0)
		{
			set->g_minus = 1;
			set->g_width *= -1;
		}
		i++;
	}
	else
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			set->g_width = set->g_width * 10 + (str[i] - '0');
			i++;
		}
	}
	return (set->g_width);
}
