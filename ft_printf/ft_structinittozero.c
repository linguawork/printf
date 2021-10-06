/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structinittozero.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:47:55 by areggie           #+#    #+#             */
/*   Updated: 2021/01/26 20:48:18 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_structinittozero(t_set *set)
{
	set->g_width = 0;
	set->g_dot = -1;
	set->g_minus = 0;
	set->g_zero = 0;
	set->g_type = 0;
	set->minussign = 0;
}
