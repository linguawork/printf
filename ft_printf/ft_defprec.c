/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defprec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:02:07 by areggie           #+#    #+#             */
/*   Updated: 2021/10/06 20:24:51 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void		ft_defprec_else(char *str, t_set *set)
{
	int		i;
	int		len;
	int		tmp;

	len = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		set->g_dot = ft_atoi(&str[i]);
		tmp = set->g_dot;
		while (tmp)
		{
			tmp /= 10;
			len++;
		}
		if (len)
			i += len;
		else
			i++;
	}
}

void		ft_defprec(char *str, va_list ap, t_set *set)
{
	int		i;

	i = 0;
	if (str[i] == '.' || (str[i] == '*' || ft_isdigit(str[i])))
	{
		if (str[i] == '.' && (str[i + 1] != '*' && !ft_isdigit(str[i + 1])))
		{
			set->g_dot = 0;
			i++;
		}
		if (str[i] == '*')
		{
			set->g_dot = va_arg(ap, int);
			i++;
		}
		else
		{
			ft_defprec_else(str, set);
		}
	}
}

