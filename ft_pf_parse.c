/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pf_parse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 16:54:46 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/05 18:10:51 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "/Users/mteerlin/Documents/ProjectLibft/Libft/libft.h"

static void	parse_flags(t_flags *flags, const char **format)
{
	while (ft_strchr(FLAGSYMBOLS, **format))
	{
		if (**format == '-')
			flags->rightallign = 1;
		else if (**format == '0')
			flags->zero = 1;
		else if (**format == '#')
			flags->hash = 1;
		else if (**format == ' ')
			flags->space = 1;
		else if (**format == '+')
			flags->plus = 1;
		(*format)++;
	}
	if (flags->rightallign == 1)
		flags->zero = 0;
	if (flags->space == 1)
		flags->plus = 0;
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

//static void	parse_format(t_flags *flags, const char **format, va_list *args)
//{
//	return
//}

void		pf_parse(t_flags *flags, const char **format, va_list *args)
{
	if (ft_strchr(FLAGSYMBOLS, **format))
		parse_flags(flags, format);
	if (ft_isdigit(**format) || **format == '*')
		parse_width(flags, format, args);
	if (**format == '.')
		parse_precision(flags, format, args);
//	if (ft_strchr(TYPESYMBOLS, **format))
//		parse_format(flags, format, args);
}
