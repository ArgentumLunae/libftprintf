/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 11:47:48 by mteerlin      #+#    #+#                 */
/*   Updated: 2021/01/20 16:44:01 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	t_mods	mods;
	int		ret;

	ft_bzero(&mods, sizeof(t_mods));
	mods.precision = -1;
	va_start(args, format);
	ret = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			pf_parse(&format, &mods, &args);
			ft_putstr_fd(mods.modstr, 1);
			ret += ft_strlen(mods.modstr);
			free(mods.modstr);
			mods.modstr = NULL;
			format++;
			continue ;
		}
		ft_putchar_fd(*format, 1);
		ret++;
		format++;
	}
	return (0);
}
