/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:31:31 by areggie           #+#    #+#             */
/*   Updated: 2021/01/26 20:10:53 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str, int len, t_set *set)
{
	while (*str != '\0' && len > 0)
	{
		ft_putchar(*str, set);
		str++;
		len--;
	}
}
