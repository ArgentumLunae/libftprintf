# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mteerlin <mteerlin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/18 13:34:08 by mteerlin      #+#    #+#                  #
#    Updated: 2021/01/20 17:27:41 by mteerlin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
SOURCE		= ft_printf.c pf_parse.c pf_integers.c pf_characters.c pf_utils.c
OBJECTS		= $(SOURCE:.c=.o)
HEADER		= ft_printf.h
CFLAGS		= -Wall -Wextra -Werror

all: 		$(NAME)

$(NAME):	$(OBJECTS) libft/libft.a
				ar rcs $(NAME) $(OBJECTS)

%.o:		%.c $(HEADER)
			$(CC) -c $(CFLAGS) -o $@ $<

bonus:
			$(MAKE) WITH_BONUS=1 all

clean:
			rm -f *.o *.so

fclean:
			$(MAKE) clean
			rm -f $(NAME)

re:
			$(MAKE) fclean
			$(MAKE) all

.PHONY:		all clean fclean re