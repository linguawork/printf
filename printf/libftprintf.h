/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:31:54 by areggie           #+#    #+#             */
/*   Updated: 2021/02/01 14:01:16 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include "libft/libft.h"

typedef struct	s_set
{
	int			g_result;
	int			g_width;
	int			g_dot;
	int			g_minus;
	int			g_zero;
	int			g_type;
	int			minussign;
}				t_set;

# define CHARACTERS "cspdiuxX%"

void			ft_putchar(char c, t_set *set);
int				ft_strlenp (char *str);
void			ft_putstr(char *str, int len, t_set *set);
int				ft_printf(const char *str, ...);
void			ft_printf_x(unsigned long nbr, t_set *set);
void			ft_printf_bigx(unsigned long nbr, t_set *set);
void			ft_printf_u(unsigned int nbr, t_set *set);
void			ft_printf_s(char *str, t_set *set);
void			ft_printf_p(unsigned long long nbr, t_set *set);
void			ft_printf_d(long nbr, t_set *set);
void			ft_printf_c(char c, t_set *set);
char			*ft_llitoa(unsigned long long nbr, int base);
char			*ft_itoabigx(unsigned long nbr, int base);
char			*ft_itoap(unsigned long nbr, int base);
int				itlen(unsigned long nbr, int base);
int				llitlen(unsigned long long nbr, int base);
void			ft_structinittozero (t_set *set);
int				ft_parser(char *str, va_list ap, t_set *set);
void			ft_printing(va_list ap, t_set *set);
int				ft_defwidth(char *str, va_list ap, t_set *set);
void			ft_defprec(char *str, va_list ap, t_set *set);
int				ft_atoi(char *str);
void			ft_printf_procent(t_set *set);
void			ft_printf_procent_nullsandzeros(t_set *set);
char			*ft_processprecision(char *str, t_set *set);
void			ft_print_ornulls(char c, int len, t_set *set);
void			ft_defprec_else(char *str, t_set *set);
void			ifcasesbigx (int len, int zeros, t_set *set);
void			ifcases_d(int len, int zeros, t_set *set);
void			specialcases_d(int len, t_set *set);
void			specialcases_p(int len, t_set *set);
void			ifcases_p(int len, int zeros, t_set *set);
void			ifcases_s1(int len, char *str, t_set *set);
void			ifcases_s2(int len, char *str, t_set *set);
void			ifcases_u(int len, int zeros, t_set *set);
void			ifcases_x(int len, int zeros, t_set *set);

#endif
