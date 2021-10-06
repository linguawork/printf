# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areggie <areggie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/05 21:25:54 by areggie           #+#    #+#              #
#    Updated: 2021/02/01 13:31:12 by areggie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =./ft_itoap.c ./ft_itoabigx.c ft_llitoa.c ./ft_printf_c.c\
./ft_printf_d.c ./ft_printf_p.c ./ft_printf_s.c ./ft_printf_u.c\
./ft_printf_x.c ./ft_printf.c ./ft_printf_bigx.c ./ft_putchar.c ft_putstr.c\
./ft_parser.c ./ft_printing.c ./ft_strlenp.c\
./ft_defwidth.c ./ft_defprec.c ./ft_structinittozero.c \
./ft_printf_procent.c ./ft_print_ornulls.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) ${CFLAGS} -c $< -o $@


${NAME}: ${OBJS}
		$(MAKE) -C libft
		 mv libft/libft.a ./$(NAME)
		 ar rc ${NAME} ${OBJS}
		 #libft/*.c

all: ${NAME}

clean:
	make clean -C libft
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
