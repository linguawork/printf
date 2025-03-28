/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:31:42 by areggie           #+#    #+#             */
/*   Updated: 2021/01/31 18:01:21 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_strlenp(char *str)
{
	int	len;

	len = 0;
	while (str && *str++ != '\0')
	{
		len++;
	}
	return (len);
}
