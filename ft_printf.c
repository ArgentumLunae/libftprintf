/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:03:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/05 19:46:33 by mteerlin      ########   odam.nl         */
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
			pf_parse(&flags, &format, &args);
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

	i = 1254;
	c = 'T';
	s = "I'm a lumberjack and I'm OK";
	printf("int:\t%#0 3X\nchar:\t%06c\nstr:\t%0 +*.*s\n", i, c, 86, 26, s);
	return (0);
}
