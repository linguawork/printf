/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:24:55 by areggie           #+#    #+#             */
/*   Updated: 2021/02/01 15:26:36 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int		ft_parser(char *str, va_list ap, t_set *set)
{
	int	i;

	i = 0;
	ft_structinittozero(set);
	while (!ft_strchr(CHARACTERS, str[i]))
	{
		if (str[i] == '-')
			set->g_minus = 1;
		if (str[i - 1] != '.' && str[i] == '0' && !ft_isdigit(str[i - 1]))
			set->g_zero = 1;
		if ((str[i] == '*' || ft_isdigit(str[i])) && str[i - 1] != '.' && \
			str[i - 2] != '.')
			ft_defwidth(str + i, ap, set);
		if (((str[i - 1] == '.' && (str[i] == '*' || ft_isdigit(str[i])))) ||\
			(str[i] == '.' && (str[i + 1] != '*' || !ft_isdigit(str[i + 1]))))
			ft_defprec(str + i, ap, set);
		if (str[i] != '\0')
			i++;
	}
	set->g_type = str[i];
	return (i);
}


