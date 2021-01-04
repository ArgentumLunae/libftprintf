/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:03:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2021/01/04 11:49:56 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "Libft/libft.h"
#include <stdlib.h>

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
			ft_putstr_fd(flags.ret, 1);
			free(flags.ret);
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (1);
}
