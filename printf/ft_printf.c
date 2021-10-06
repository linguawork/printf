/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 18:38:12 by areggie           #+#    #+#             */
/*   Updated: 2021/01/26 18:19:38 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_printf(const char *str, ...)
{
	va_list	ap;
	t_set	set;
	int		i;
	int		b;

	i = -1;
	b = 0;
	set.g_result = 0;
	va_start(ap, str);
	while (str[++i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			b = ft_parser((char *)str + i, ap, &set);
			ft_printing(ap, &set);
			if (set.g_type == 0)
				return (-1);
			i = i + b;
		}
		else
			ft_putchar(str[i], &set);
	}
	va_end(ap);
	return (set.g_result);
}
