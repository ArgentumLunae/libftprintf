# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mteerlin <mteerlin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/08 12:21:56 by mteerlin      #+#    #+#                  #
#    Updated: 2020/12/15 20:22:05 by mteerlin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SOURCES	= ft_printf.c ft_printf_utils.c ft_pf_parse.c ft_pf_signed_dec.c	\
			ft_pf_unsigned_base.c ft_pf_string.c
OBJECTS	= $(SOURCES:.c=.o)
OBJ_DIR	= obj
LIBFT	= Libft/libft.a

HEADER	= ft_printf.h
CFLAGS	= -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJECTS)
					ar rcs $(NAME) $(OBJECTS)

$(OBJ_DIR)/%.o:	%.c $(HEADER)
					$(CC) -c $(CFLAGS) -o $@ $<

clean:
				rm -f *.o

fclean:
				$(MAKE) clean
				rm -f $(NAME)

re:
				$(MAKE) fclean
				$(MAKE) all

.PHONY:			all clean fclean re