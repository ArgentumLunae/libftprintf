/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pf_parse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 16:54:46 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/15 21:28:51 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "/Users/mteerlin/Documents/ProjectLibft/Libft/libft.h"
#include <stdio.h>

static void	parse_flags(t_flags *flags, const char **format)
{
	while (ft_strchr(FLAGSYMBOLS, **format))
	{
		if (**format == '-')
			flags->flag[(int)'-'] = 1;
		else if (**format == '0')
			flags->flag[(int)'0'] = 1;
		else if (**format == '#')
			flags->flag[(int)'#'] = 1;
		else if (**format == ' ')
			flags->flag[(int)' '] = 1;
		else if (**format == '+')
			flags->flag[(int)'+'] = 1;
		(*format)++;
	}
	if (flags->flag[(int)'-'] == 1)
		flags->flag[(int)'0'] = 0;
	if (flags->flag[(int)' '] == 1)
		flags->flag[(int)'+'] = 0;
}

static void	parse_width(t_flags *flags, const char **format, va_list *args)
{
	if (**format == '*')
	{
		flags->width = va_arg(*args, int);
		(*format)++;
	}
	else if (ft_isdigit(**format))
	{
		flags->width = ft_atoi(*format);
		while (ft_isdigit(**format))
			(*format)++;
	}
}

static void	parse_precision(t_flags *flags, const char **format, va_list *args)
{
	if (**format == '.')
	{
		(*format)++;
		if (**format == '*')
		{
			flags->precision = va_arg(*args, int);
			(*format)++;
		}
		else if (ft_isdigit(**format))
		{
			flags->precision = ft_atoi(*format);
			while (ft_isdigit(**format))
				(*format)++;
		}
	}
}

static void	parse_type(t_flags *flags, const char **format, va_list *args)
{
	if (**format == 'd' || **format == 'i')
		ft_pf_signed_dec(va_arg(*args, int), flags);
	else if (**format == 'u')
		ft_pf_unsigned_base(va_arg(*args, int), flags, B_DEC, **format);
	else if (**format == 'x' || **format == 'X')
		ft_pf_unsigned_base(va_arg(*args, int), flags, B_HEXDEC, **format);
	else if (**format == 'p')
	{
		flags->precision = -1;
		flags->flag[(int)'0'] = 0;
		ft_pf_unsigned_base(va_arg(*args, int), flags, B_HEXDEC, **format);
	}
//	else if (**format == 'c')
	else if (**format == 's')
		ft_pf_string(va_arg(*args, char*), flags);
//	else if (**format == '%')
	return ;
}

void		pf_parse(t_flags *flags, const char **format, va_list *args)
{
	if (ft_strchr(FLAGSYMBOLS, **format))
		parse_flags(flags, format);
	if (ft_isdigit(**format) || **format == '*')
		parse_width(flags, format, args);
	else
		flags->width = -1;
	if (**format == '.')
		parse_precision(flags, format, args);
	else
		flags->precision = -1;
	if (ft_strchr(TYPESYMBOLS, **format))
		parse_type(flags, format, args);
}
