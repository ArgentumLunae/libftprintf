/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 17:53:57 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/15 21:08:19 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "Libft/libft.h"
#include "ft_printf.h"
#include <limits.h>

int	main(int argc, char *argv[argc])
{
	int				i, u;
	int				d;
	unsigned int	x;
	char			c;
	char			*s;

	i = u = UINT_MAX;
	d = -i;
	x = UINT_MAX;
	c = 'T';
	s = "I'm a lumberjack, and I'm OK";
	if (argc != 2)
	{
		printf("Wrong nr of arguments.\nabort.\n");
		return (0);
	}
	if (!ft_strncmp(argv[1], "d", 1))
	{
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
	}
	if (!ft_strncmp(argv[1], "i", 1))
	{
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
		printf("flags:\tnone\twidth:\t20\tprecision:\t10\tint:\t%20.10i\tPrintf\n", i);
		ft_printf("flags:\tnone\twidth:\t20\tprecision:\t10\tint:\t%20.10i\tft_Printf\n\n", i);
		printf("flags:\t-\twidth:\t20\tprecision:\t10\tint:\t%-20.10i\tPrintf\n", i);
		ft_printf("flags:\t-\twidth:\t20\tprecision:\t10\tint:\t%-20.10i\tft_Printf\n\n", i);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tint:\t%.0i\tPrintf\n", i);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tint:\t%.0i\tft_Printf\n\n", i);
		printf("flags:\t0\twidth:\t0\tprecision:\t0\tint:\t%00i\tPrintf\n", i);
		ft_printf("flags:\t0\twidth:\t0\tprecision:\t0\tint:\t%00i\tft_Printf\n\n", i);
	}
	if (!ft_strncmp(argv[1], "u", 1))
	{
		printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tHEX:\t%u\tPrintf\n", u);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tHEX:\t%u\tft_Printf\n\n", u);
		printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tHEX:\t%10u\tPrintf\n", u);
		ft_printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tHEX:\t%10u\tft_Printf\n\n", u);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tHEX:\t%.10u\tPrintf\n", u);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tHEX:\t%.10u\tft_Printf\n\n", u);
		printf("flags:\t0\twidth:\t10\tprecision:\tnone\tHEX:\t%010u\tPrintf\n", u);
		ft_printf("flags:\t0\twidth:\t10\tprecision:\tnone\tHEX:\t%010u\tft_Printf\n\n", u);
		printf("flags:\t-\twidth:\tnone\tprecision:\t10\tHEX:\t%-.10u\tPrintf\n", u);
		ft_printf("flags:\t-\twidth:\tnone\tprecision:\t10\tHEX:\t%-.10u\tft_Printf\n\n", u);
		printf("flags:\tnone\twidth:\t20\tprecision:\t10\t%20.10u\tPrintf\n", u);
		ft_printf("flags:\tnone\twidth:\t20\tprecision:\t10\t%20.10u\tft_Printf\n\n", u);
		printf("flags:\t-\twidth:\t20\tprecision:\t10\tHEX:\t%-20.10u\tPrintf\n", u);
		ft_printf("flags:\t-\twidth:\t20\tprecision:\t10\tHEX:\t%-20.10u\tft_Printf\n\n", u);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tHEX:\t%.0u\tPrintf\n", u);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tHEX:\t%.0u\tft_Printf\n\n", u);
		printf("flags:\t0\twidth:\t0\tprecision:\t0\tHEX:\t%00u\tPrintf\n", u);
		ft_printf("flags:\t0\twidth:\t0\tprecision:\t0\tHEX:\t%00u\tft_Printf\n\n", u);
	}
	if (!ft_strncmp(argv[1], "x", 1))
	{
		printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\thex:\t%x\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\thex:\t%x\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\t10\tprecision:\tnone\thex:\t%10x\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\t10\tprecision:\tnone\thex:\t%10x\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t10\thex:\t%.10x\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t10\thex:\t%.10x\tft_Printf\n\n", x);
		printf("flags:\t0\twidth:\t10\tprecision:\tnone\thex:\t%010x\tPrintf\n", x);
		ft_printf("flags:\t0\twidth:\t10\tprecision:\tnone\thex:\t%010x\tft_Printf\n\n", x);
		printf("flags:\t-\twidth:\tnone\tprecision:\t10\thex:\t%-.10x\tPrintf\n", x);
		ft_printf("flags:\t-\twidth:\tnone\tprecision:\t10\thex:\t%-.10x\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\t20\tprecision:\t10\thex:\t%20.10x\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\t20\tprecision:\t10\thex:\t%20.10x\tft_Printf\n\n", x);
		printf("flags:\t-\twidth:\t20\tprecision:\t10\thex:\t%-20.10x\tPrintf\n", x);
		ft_printf("flags:\t-\twidth:\t20\tprecision:\t10\thex:\t%-20.10x\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t0\thex:\t%.0x\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t0\thex:\t%.0x\tft_Printf\n\n", x);
		printf("flags:\t0\twidth:\t0\tprecision:\t0\thex:\t%00x\tPrintf\n", x);
		ft_printf("flags:\t0\twidth:\t0\tprecision:\t0\thex:\t%00x\tft_Printf\n\n", x);
	}
	if (!ft_strncmp(argv[1], "X", 1))
	{
		printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tHEX:\t%X\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tHEX:\t%X\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tHEX:\t%10X\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\t10\tprecision:\tnone\tHEX:\t%10X\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tHEX:\t%.10X\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tHEX:\t%.10X\tft_Printf\n\n", x);
		printf("flags:\t0\twidth:\t10\tprecision:\tnone\tHEX:\t%010X\tPrintf\n", x);
		ft_printf("flags:\t0\twidth:\t10\tprecision:\tnone\tHEX:\t%010X\tft_Printf\n\n", x);
		printf("flags:\t-\twidth:\tnone\tprecision:\t10\tHEX:\t%-.10X\tPrintf\n", x);
		ft_printf("flags:\t-\twidth:\tnone\tprecision:\t10\tHEX:\t%-.10X\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\t20\tprecision:\t10\tHEX:%20.10X\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\t20\tprecision:\t10\tHEX:%20.10X\tft_Printf\n\n", x);
		printf("flags:\t-\twidth:\t20\tprecision:\t10\tHEX:\t%-20.10X\tPrintf\n", x);
		ft_printf("flags:\t-\twidth:\t20\tprecision:\t10\tHEX:\t%-20.10X\tft_Printf\n\n", x);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tHEX:\t%.0X\tPrintf\n", x);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tHEX:\t%.0X\tft_Printf\n\n", x);
		printf("flags:\t0\twidth:\t0\tprecision:\t0\tHEX:\t%00X\tPrintf\n", x);
		ft_printf("flags:\t0\twidth:\t0\tprecision:\t0\tHEX:\t%00X\tft_Printf\n\n", x);
	}
		if (!ft_strncmp(argv[1], "s", 1))
	{
		printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tstr:\t%s\tPrintf\n", s);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\tnone\tstr:\t%s\tft_Printf\n\n", s);
		printf("flags:\tnone\twidth:\t100\tprecision:\tnone\tstr:\t%100s\tPrintf\n", s);
		ft_printf("flags:\tnone\twidth:\t100\tprecision:\tnone\tstr:\t%100s\tft_Printf\n\n", s);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tstr:\t%.10s\tPrintf\n", s);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t10\tstr:\t%.10s\tft_Printf\n\n", s);
		printf("flags:\t0\twidth:\t10\tprecision:\tnone\tstr:\t%10s\tPrintf\n", s);
		ft_printf("flags:\t0\twidth:\t10\tprecision:\tnone\tstr:\t%10s\tft_Printf\n\n", s);
		printf("flags:\t-\twidth:\tnone\tprecision:\t10\tstr:\t%-.10s\tPrintf\n", s);
		ft_printf("flags:\t-\twidth:\tnone\tprecision:\t10\tstr:\t%-.10s\tft_Printf\n\n", s);
		printf("flags:\tnone\twidth:\t20\tprecision:\t10\tstr:\t%20.10s\tPrintf\n", s);
		ft_printf("flags:\tnone\twidth:\t20\tprecision:\t10\tstr:\t%20.10s\tft_Printf\n\n", s);
		printf("flags:\t-\twidth:\t20\tprecision:\t10\tstr:\t%-20.10s\tPrintf\n", s);
		ft_printf("flags:\t-\twidth:\t20\tprecision:\t10\tstr:\t%-20.10s\tft_Printf\n\n", s);
		printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tstr:\t%.50s\tPrintf\n", s);
		ft_printf("flags:\tnone\twidth:\tnone\tprecision:\t0\tstr:\t%.0s\tft_Printf\n\n", s);
		printf("flags:\t0\twidth:\t0\tprecision:\t0\tstr:\t%s\tPrintf\n", s);
		ft_printf("flags:\t0\twidth:\t0\tprecision:\t0\tstr:\t%s\tft_Printf\n\n", s);
	}
	return (0);
}
