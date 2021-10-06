/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ornulls.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:18:25 by areggie           #+#    #+#             */
/*   Updated: 2021/01/25 18:54:32 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_ornulls(char c, int len, t_set *set)
{
	int	i;

	i = 0;
	if (len < 0)
		len = 0;
	while (i != len)
	{
		ft_putchar(c, set);
		i++;
	}
}
