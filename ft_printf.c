/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:03:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/08 21:57:03 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
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
			ft_putstr_fd(flags.ret, 1);
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
	int		d;
	char	c;
	char	*s;

	i = 123456;
	d = -i;
	c = 'T';
	s = "I'm a lumberjack and I'm OK";
	printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tint:\t%d\tPrintf\n", d);
	ft_printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tint:\t%d\tft_Printf\n\n", d);
	printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tint:\t%10d\tPrintf\n", d);
	ft_printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tint:\t%10d\tft_Printf\n\n", d);
	printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tint:\t%.10d\tPrintf\n", d);
	ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tint:\t%.10d\tft_Printf\n\n", d);
	printf("flags:\t0\twidth:\t10\tprecision:\tnone\tint:\t%010d\tPrintf\n", d);
	ft_printf("flags:\t0\twidth:\t10\tprecision:\tnone\tint:\t%010d\tft_Printf\n\n", d);
	printf("flags:\t-\twidth:\tnone\tprecision:\t10\tint:\t%-.10d\tPrintf\n", d);
	ft_printf("flags:\t-\twidth:\tnone\tprecision:\t10\tint:\t%-.10d\tft_Printf\n\n", d);
	printf("flags:\tnone\twidth:\t20\tprecision:\t10\tint:\t%20.10d\tPrintf\n", d);
	ft_printf("flags:\tnone\twidth:\t20\tprecision:\t10\tint:\t%20.10d\tft_Printf\n\n", d);
	printf("flags:\t-\twidth:\t20\tprecision:\t10\tint:\t%-20.10d\tPrintf\n", d);
	ft_printf("flags:\t-\twidth:\t20\tprecision:\t10\tint:\t%-20.10d\tft_Printf\n\n", d);
	printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tint:\t%.0d\tPrintf\n", d);
	ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tint:\t%.0d\tft_Printf\n\n", d);
	printf("flags:\t0\twidth:\t0\tprecision:\t0\tint:\t%00d\tPrintf\n", d);
	ft_printf("flags:\t0\twidth:\t0\tprecision:\t0\tint:\t%00d\tft_Printf\n\n", d);
	printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tint:\t%i\tPrintf\n", i);
	ft_printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tint:\t%i\tft_Printf\n\n", i);
	printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tint:\t%10i\tPrintf\n", i);
	ft_printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tint:\t%10i\tft_Printf\n\n", i);
	printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tint:\t%.10i\tPrintf\n", i);
	ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tint:\t%.10i\tft_Printf\n\n", i);
	printf("flags:\t0\twidth:\t10\tprecision:\tnone\tint:\t%010i\tPrintf\n", i);
	ft_printf("flags:\t0\twidth:\t10\tprecision:\tnone\tint:\t%010i\tft_Printf\n\n", i);
	printf("flags:\t-\twidth:\tnone\tprecision:\t10\tint:\tint:\t%-.10i\tPrintf\n", i);
	ft_printf("flags:\t-\twidth:\tnone\tprecision:\t10\tint:\tint:\t%-.10i\tft_Printf\n\n", i);
	printf("flags:\tnone\twidth:\t20\tprecision:\t10\t%20.10i\tPrintf\n", i);
	ft_printf("flags:\tnone\twidth:\t20\tprecision:\t10\t%20.10i\tft_Printf\n\n", i);
	printf("flags:\t-\twidth:\t20\tprecision:\t10\tint:\t%-20.10i\tPrintf\n", i);
	ft_printf("flags:\t-\twidth:\t20\tprecision:\t10\tint:\t%-20.10i\tft_Printf\n\n", i);
	printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tint:\t%.0i\tPrintf\n", i);
	ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tint:\t%.0i\tft_Printf\n\n", i);
	printf("flags:\t0\twidth:\t0\tprecision:\t0\tint:\t%00i\tPrintf\n", i);
	ft_printf("flags:\t0\twidth:\t0\tprecision:\t0\tint:\t%00i\tft_Printf\n\n", i);
	return (0);
}
