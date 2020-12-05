/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:03:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/05 17:50:17 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "/Users/mteerlin/Documents/ProjectLibft/Libft/libft.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	t_flags	flags;

	ft_bzero(&flags, sizeof(t_flags));
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_bzero(&flags, sizeof(t_flags));
			printf_parse(&flags, &format, &args);
			printf("\nRA:\t%i\n", flags.rightallign);
			printf("Z:\t%i\n", flags.zero);
			printf("H:\t%i\n", flags.hash);
			printf("S:\t%i\n", flags.space);
			printf("P:\t%i\n", flags.plus);
			printf("W:\t%i\n", flags.width);
			printf("P:\t%i\n", flags.precision);
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (1);
}

int	main(void)
{
	int		i;
	char	c;
	char	*s;

	i = 4;
	c = 'T';
	s = "I'm a lumberjack and I'm OK";
	ft_printf("int:\t%-0# +86.14i\nchar:\t%0#+.15c\nstr:\t%+*.*s\n", i, c, 17, 5, s);
	return (0);
}
