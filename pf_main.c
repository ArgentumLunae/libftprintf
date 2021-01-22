/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_main.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 15:17:45 by mteerlin      #+#    #+#                 */
/*   Updated: 2021/01/20 14:02:32 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <limits.h>

static void test_percentile()
{
	printf("\033[1;34m");
	printf("Testing: %%");
	printf("\033[0m\n");
	ft_printf("|\t%%\t| ft_printf\n");
	printf("|\t%%\t| printf\n\n");
}

static void	test_signed_dec_i(int width, int precision)
{
	printf("\033[1;34m");
	printf("Testing: signed decimal (i)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%i\t\t| ft_printf\n", 1);
	printf("|\t%i\t\t| printf\n", 1);
	ft_printf("|\t%i\t\t| ft_printf\n", 0);
	printf("|\t%i\t\t| printf\n", 0);
	ft_printf("|\t%i\t\t| ft_printf\n", -1);
	printf("|\t%i\t\t| printf\n", -1);
	ft_printf("|\t%i\t| ft_printf\n", INT_MAX);
	printf("|\t%i\t| printf\n", INT_MAX);
	ft_printf("|\t%i\t| ft_printf\n", INT_MIN);
	printf("|\t%i\t| printf\n\n", INT_MIN);

	printf("\033[1;33m");
	printf("\ttest precision");
	printf("\033[0m\n");
	ft_printf("|\t%.*i\t\t| ft_printf\n", precision, 1);
	printf("|\t%.*i\t\t| printf\n", precision, 1);
	ft_printf("|\t%.*i\t\t| ft_printf\n", precision, 0);
	printf("|\t%.*i\t\t| printf\n", precision, 0);
	ft_printf("|\t%.*i\t\t| ft_printf\n", precision, -1);
	printf("|\t%.*i\t\t| printf\n", precision, -1);
	ft_printf("|\t%.*i\t| ft_printf\n", precision, INT_MAX);
	printf("|\t%.*i\t| printf\n", precision, INT_MAX);
	ft_printf("|\t%.*i\t| ft_printf\n", precision, INT_MIN);
	printf("|\t%.*i\t| printf\n\n", precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15i\t| ft_printf\n", 1);
	printf("|\t%*i\t| printf\n", width, 1);
	ft_printf("|\t%*i\t| ft_printf\n", width, 0);
	printf("|\t%*i\t| printf\n", width, 0);
	ft_printf("|\t%*i\t| ft_printf\n", width, -1);
	printf("|\t%*i\t| printf\n", width, -1);
	ft_printf("|\t%*i\t| ft_printf\n", width, INT_MAX);
	printf("|\t%*i\t| printf\n", width, INT_MAX);
	ft_printf("|\t%*i\t| ft_printf\n", width, INT_MIN);
	printf("|\t%*i\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest fillzero");
	printf("\033[0m\n");
	ft_printf("|\t%0*i\t| ft_printf\n", width, 1);
	printf("|\t%0*i\t| printf\n", width, 1);
	ft_printf("|\t%0*i\t| ft_printf\n", width, 0);
	printf("|\t%0*i\t| printf\n", width, 0);
	ft_printf("|\t%0*i\t| ft_printf\n", width, -1);
	printf("|\t%0*i\t| printf\n", width, -1);
	ft_printf("|\t%0*i\t| ft_printf\n", width, INT_MAX);
	printf("|\t%0*i\t| printf\n", width, INT_MAX);
	ft_printf("|\t%0*i\t| ft_printf\n", width, INT_MIN);
	printf("|\t%0*i\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*i\t| ft_printf\n", width, 1);
	printf("|\t%-*i\t| printf\n", width, 1);
	ft_printf("|\t%-*i\t| ft_printf\n", width, 0);
	printf("|\t%-*i\t| printf\n", width, 0);
	ft_printf("|\t%-*i\t| ft_printf\n", width, -1);
	printf("|\t%-*i\t| printf\n", width, -1);
	ft_printf("|\t%-*i\t| ft_printf\n", width, INT_MAX);
	printf("|\t%-*i\t| printf\n", width, INT_MAX);
	ft_printf("|\t%-*i\t| ft_printf\n", width, INT_MIN);
	printf("|\t%-*i\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width and Precision");
	printf("\033[0m\n");
	ft_printf("|\t%*.*i\t| ft_printf\n", width, precision, 1);
	printf("|\t%*.*i\t| printf\n", width, precision, 1);
	ft_printf("|\t%*.*i\t| ft_printf\n", width, precision, 0);
	printf("|\t%*.*i\t| printf\n", width, precision, 0);
	ft_printf("|\t%*.*i\t| ft_printf\n", width, precision, -1);
	printf("|\t%*.*i\t| printf\n", width, precision, -1);
	ft_printf("|\t%*.*i\t| ft_printf\n", width, precision, INT_MAX);
	printf("|\t%*.*i\t| printf\n", width, precision, INT_MAX);
	ft_printf("|\t%*.*i\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%*.*i\t| printf\n\n", width, precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width, precision and left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*.*i\t| ft_printf\n", width, precision, 1);
	printf("|\t%-*.*i\t| printf\n", width, precision, 1);
	ft_printf("|\t%-*.*i\t| ft_printf\n", width, precision, 0);
	printf("|\t%-*.*i\t| printf\n", width, precision, 0);
	ft_printf("|\t%-*.*i\t| ft_printf\n", width, precision, -1);
	printf("|\t%-*.*i\t| printf\n", width, precision, -1);
	ft_printf("|\t%-*.*i\t| ft_printf\n", width, precision, INT_MAX);
	printf("|\t%-*.*i\t| printf\n", width, precision, INT_MAX);
	ft_printf("|\t%-*.*i\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%-*.*i\t| printf\n\n", width, precision, INT_MIN);
}

static void test_signed_dec_d(int width, int precision)
{
	printf("\033[1;34m");
	printf("Testing: signed decimal (d)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%d\t\t| ft_printf\n", 1);
	printf("|\t%d\t\t| printf\n", 1);
	ft_printf("|\t%d\t\t| ft_printf\n", 0);
	printf("|\t%d\t\t| printf\n", 0);
	ft_printf("|\t%d\t\t| ft_printf\n", -1);
	printf("|\t%d\t\t| printf\n", -1);
	ft_printf("|\t%d\t| ft_printf\n", INT_MAX);
	printf("|\t%d\t| printf\n", INT_MAX);
	ft_printf("|\t%d\t| ft_printf\n", INT_MIN);
	printf("|\t%d\t| printf\n\n", INT_MIN);

	printf("\033[1;33m");
	printf("\ttest precision");
	printf("\033[0m\n");
	ft_printf("|\t%.*d\t\t| ft_printf\n", precision, 1);
	printf("|\t%.*d\t\t| printf\n", precision, 1);
	ft_printf("|\t%.*d\t\t| ft_printf\n", precision, 0);
	printf("|\t%.*d\t\t| printf\n", precision, 0);
	ft_printf("|\t%.*d\t\t| ft_printf\n", precision, -1);
	printf("|\t%.*d\t\t| printf\n", precision, -1);
	ft_printf("|\t%.*d\t| ft_printf\n", precision, INT_MAX);
	printf("|\t%.*d\t| printf\n", precision, INT_MAX);
	ft_printf("|\t%.*d\t| ft_printf\n", precision, INT_MIN);
	printf("|\t%.*d\t| printf\n\n", precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15d\t| ft_printf\n", 1);
	printf("|\t%*d\t| printf\n", width, 1);
	ft_printf("|\t%*d\t| ft_printf\n", width, 0);
	printf("|\t%*d\t| printf\n", width, 0);
	ft_printf("|\t%*d\t\t| ft_printf\n", width, -1);
	printf("|\t%*d\t\t| printf\n", width, -1);
	ft_printf("|\t%*d\t| ft_printf\n", width, INT_MAX);
	printf("|\t%*d\t| printf\n", width, INT_MAX);
	ft_printf("|\t%*d\t| ft_printf\n", width, INT_MIN);
	printf("|\t%*d\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest fillzero");
	printf("\033[0m\n");
	ft_printf("|\t%0*d\t| ft_printf\n", width, 1);
	printf("|\t%0*d\t| printf\n", width, 1);
	ft_printf("|\t%0*d\t| ft_printf\n", width, 0);
	printf("|\t%0*d\t| printf\n", width, 0);
	ft_printf("|\t%0*d\t| ft_printf\n", width, -1);
	printf("|\t%0*d\t| printf\n", width, -1);
	ft_printf("|\t%0*d\t| ft_printf\n", width, INT_MAX);
	printf("|\t%0*d\t| printf\n", width, INT_MAX);
	ft_printf("|\t%0*d\t| ft_printf\n", width, INT_MIN);
	printf("|\t%0*d\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*d\t| ft_printf\n", width, 1);
	printf("|\t%-*d\t| printf\n", width, 1);
	ft_printf("|\t%-*d\t| ft_printf\n", width, 0);
	printf("|\t%-*d\t| printf\n", width, 0);
	ft_printf("|\t%-*d\t| ft_printf\n", width, -1);
	printf("|\t%-*d\t| printf\n", width, -1);
	ft_printf("|\t%-*d\t| ft_printf\n", width, INT_MAX);
	printf("|\t%-*d\t| printf\n", width, INT_MAX);
	ft_printf("|\t%-*d\t| ft_printf\n", width, INT_MIN);
	printf("|\t%-*d\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width and Precision");
	printf("\033[0m\n");
	ft_printf("|\t%*.*d\t| ft_printf\n", width, precision, 1);
	printf("|\t%*.*d\t| printf\n", width, precision, 1);
	ft_printf("|\t%*.*d\t| ft_printf\n", width, precision, 0);
	printf("|\t%*.*d\t| printf\n", width, precision, 0);
	ft_printf("|\t%*.*d\t| ft_printf\n", width, precision, -1);
	printf("|\t%*.*d\t| printf\n", width, precision, -1);
	ft_printf("|\t%*.*d\t| ft_printf\n", width, precision, INT_MAX);
	printf("|\t%*.*d\t| printf\n", width, precision, INT_MAX);
	ft_printf("|\t%*.*d\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%*.*d\t| printf\n\n", width, precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width, precision and left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*.*d\t| ft_printf\n", width, precision, 1);
	printf("|\t%-*.*d\t| printf\n", width, precision, 1);
	ft_printf("|\t%-*.*d\t| ft_printf\n", width, precision, 0);
	printf("|\t%-*.*d\t| printf\n", width, precision, 0);
	ft_printf("|\t%-*.*d\t| ft_printf\n", width, precision, -1);
	printf("|\t%-*.*d\t| printf\n", width, precision, -1);
	ft_printf("|\t%-*.*d\t| ft_printf\n", width, precision, INT_MAX);
	printf("|\t%-*.*d\t| printf\n", width, precision, INT_MAX);
	ft_printf("|\t%-*.*d\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%-*.*d\t| printf\n\n", width, precision, INT_MIN);
}

static void test_unsigned_dec_u(int width, int precision)
{
	printf("\033[1;34m");
	printf("Testing: unsigmed decimal (u)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%u\t\t| ft_printf\n", 1);
	printf("|\t%u\t\t| printf\n", 1);
	ft_printf("|\t%u\t\t| ft_printf\n", 0);
	printf("|\t%u\t\t| printf\n", 0);
	ft_printf("|\t%u\t| ft_printf\n", -1);
	printf("|\t%u\t| printf\n", -1);
	ft_printf("|\t%u\t| ft_printf\n", UINT_MAX);
	printf("|\t%u\t| printf\n", UINT_MAX);
	ft_printf("|\t%u\t| ft_printf\n", INT_MIN);
	printf("|\t%u\t| printf\n\n", INT_MIN);

	printf("\033[1;33m");
	printf("\ttest precision");
	printf("\033[0m\n");
	ft_printf("|\t%.*u\t| ft_printf\n", precision, 1);
	printf("|\t%.*u\t| printf\n", precision, 1);
	ft_printf("|\t%.*u\t\t| ft_printf\n", precision, 0);
	printf("|\t%.*u\t\t| printf\n", precision, 0);
	ft_printf("|\t%.*u\t\t| ft_printf\n", precision, -1);
	printf("|\t%.*u\t\t| printf\n", precision, -1);
	ft_printf("|\t%.*u\t| ft_printf\n", precision, UINT_MAX);
	printf("|\t%.*u\t| printf\n", precision, UINT_MAX);
	ft_printf("|\t%.*u\t| ft_printf\n", precision, INT_MIN);
	printf("|\t%.*u\t| printf\n\n", precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15u\t| ft_printf\n", 1);
	printf("|\t%*u\t| printf\n", width, 1);
	ft_printf("|\t%*u\t| ft_printf\n", width, 0);
	printf("|\t%*u\t| printf\n", width, 0);
	ft_printf("|\t%*u\t| ft_printf\n", width, -1);
	printf("|\t%*u\t| printf\n", width, -1);
	ft_printf("|\t%*u\t| ft_printf\n", width, UINT_MAX);
	printf("|\t%*u\t| printf\n", width, UINT_MAX);
	ft_printf("|\t%*u\t| ft_printf\n", width, INT_MIN);
	printf("|\t%*u\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest fillzero");
	printf("\033[0m\n");
	ft_printf("|\t%0*u\t| ft_printf\n", width, 1);
	printf("|\t%0*u\t| printf\n", width, 1);
	ft_printf("|\t%0*u\t| ft_printf\n", width, 0);
	printf("|\t%0*u\t| printf\n", width, 0);
	ft_printf("|\t%0*u\t| ft_printf\n", width, -1);
	printf("|\t%0*u\t| printf\n", width, -1);
	ft_printf("|\t%0*u\t| ft_printf\n", width, UINT_MAX);
	printf("|\t%0*u\t| printf\n", width, UINT_MAX);
	ft_printf("|\t%0*u\t| ft_printf\n", width, INT_MIN);
	printf("|\t%0*u\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*u\t| ft_printf\n", width, 1);
	printf("|\t%-*u\t| printf\n", width, 1);
	ft_printf("|\t%-*u\t| ft_printf\n", width, 0);
	printf("|\t%-*u\t| printf\n", width, 0);
	ft_printf("|\t%-*u\t| ft_printf\n", width, -1);
	printf("|\t%-*u\t| printf\n", width, -1);
	ft_printf("|\t%-*u\t| ft_printf\n", width, UINT_MAX);
	printf("|\t%-*u\t| printf\n", width, UINT_MAX);
	ft_printf("|\t%-*u\t| ft_printf\n", width, INT_MIN);
	printf("|\t%-*u\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width and Precision");
	printf("\033[0m\n");
	ft_printf("|\t%*.*u\t| ft_printf\n", width, precision, 1);
	printf("|\t%*.*u\t| printf\n", width, precision, 1);
	ft_printf("|\t%*.*u\t| ft_printf\n", width, precision, 0);
	printf("|\t%*.*u\t| printf\n", width, precision, 0);
	ft_printf("|\t%*.*u\t| ft_printf\n", width, precision, -1);
	printf("|\t%*.*u\t| printf\n", width, precision, -1);
	ft_printf("|\t%*.*u\t| ft_printf\n", width, precision, UINT_MAX);
	printf("|\t%*.*u\t| printf\n", width, precision, UINT_MAX);
	ft_printf("|\t%*.*u\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%*.*u\t| printf\n\n", width, precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width, precision and left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*.*u\t| ft_printf\n", width, precision, 1);
	printf("|\t%-*.*u\t| printf\n", width, precision, 1);
	ft_printf("|\t%-*.*u\t| ft_printf\n", width, precision, 0);
	printf("|\t%-*.*u\t| printf\n", width, precision, 0);
	ft_printf("|\t%-*.*u\t| ft_printf\n", width, precision, -1);
	printf("|\t%-*.*u\t| printf\n", width, precision, -1);
	ft_printf("|\t%-*.*u\t| ft_printf\n", width, precision, UINT_MAX);
	printf("|\t%-*.*u\t| printf\n", width, precision, UINT_MAX);
	ft_printf("|\t%-*.*u\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%-*.*u\t| printf\n\n", width, precision, INT_MIN);
}

static void test_unsigned_hex_x(int width, int precision)
{
	printf("\033[1;34m");
	printf("Testing: unsigned hexadecimal (x)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%x\t\t| ft_printf\n", 1);
	printf("|\t%x\t\t| printf\n", 1);
	ft_printf("|\t%x\t\t| ft_printf\n", 0);
	printf("|\t%x\t\t| printf\n", 0);
	ft_printf("|\t%x\t| ft_printf\n", -1);
	printf("|\t%x\t| printf\n", -1);
	ft_printf("|\t%x\t| ft_printf\n", UINT_MAX);
	printf("|\t%x\t| printf\n", UINT_MAX);
	ft_printf("|\t%x\t| ft_printf\n", INT_MIN);
	printf("|\t%x\t| printf\n\n", INT_MIN);

	printf("\033[1;33m");
	printf("\ttest precision");
	printf("\033[0m\n");
	ft_printf("|\t%.*x\t| ft_printf\n", precision, 1);
	printf("|\t%.*x\t| printf\n", precision, 1);
	ft_printf("|\t%.*x\t\t| ft_printf\n", precision, 0);
	printf("|\t%.*x\t\t| printf\n", precision, 0);
	ft_printf("|\t%.*x\t\t| ft_printf\n", precision, -1);
	printf("|\t%.*x\t\t| printf\n", precision, -1);
	ft_printf("|\t%.*x\t| ft_printf\n", precision, UINT_MAX);
	printf("|\t%.*x\t| printf\n", precision, UINT_MAX);
	ft_printf("|\t%.*x\t| ft_printf\n", precision, INT_MIN);
	printf("|\t%.*x\t| printf\n\n", precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15x\t| ft_printf\n", 1);
	printf("|\t%*x\t| printf\n", width, 1);
	ft_printf("|\t%*x\t| ft_printf\n", width, 0);
	printf("|\t%*x\t| printf\n", width, 0);
	ft_printf("|\t%*x\t| ft_printf\n", width, -1);
	printf("|\t%*x\t| printf\n", width, -1);
	ft_printf("|\t%*x\t| ft_printf\n", width, UINT_MAX);
	printf("|\t%*x\t| printf\n", width, UINT_MAX);
	ft_printf("|\t%*x\t| ft_printf\n", width, INT_MIN);
	printf("|\t%*x\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest fillzero");
	printf("\033[0m\n");
	ft_printf("|\t%0*x\t| ft_printf\n", width, 1);
	printf("|\t%0*x\t| printf\n", width, 1);
	ft_printf("|\t%0*x\t| ft_printf\n", width, 0);
	printf("|\t%0*x\t| printf\n", width, 0);
	ft_printf("|\t%0*x\t| ft_printf\n", width, -1);
	printf("|\t%0*x\t| printf\n", width, -1);
	ft_printf("|\t%0*x\t| ft_printf\n", width, UINT_MAX);
	printf("|\t%0*x\t| printf\n", width, UINT_MAX);
	ft_printf("|\t%0*x\t| ft_printf\n", width, INT_MIN);
	printf("|\t%0*x\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*x\t| ft_printf\n", width, 1);
	printf("|\t%-*x\t| printf\n", width, 1);
	ft_printf("|\t%-*x\t| ft_printf\n", width, 0);
	printf("|\t%-*x\t| printf\n", width, 0);
	ft_printf("|\t%-*x\t| ft_printf\n", width, -1);
	printf("|\t%-*x\t| printf\n", width, -1);
	ft_printf("|\t%-*x\t| ft_printf\n", width, UINT_MAX);
	printf("|\t%-*x\t| printf\n", width, UINT_MAX);
	ft_printf("|\t%-*x\t| ft_printf\n", width, INT_MIN);
	printf("|\t%-*x\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width and Precision");
	printf("\033[0m\n");
	ft_printf("|\t%*.*x\t| ft_printf\n", width, precision, 1);
	printf("|\t%*.*x\t| printf\n", width, precision, 1);
	ft_printf("|\t%*.*x\t| ft_printf\n", width, precision, 0);
	printf("|\t%*.*x\t| printf\n", width, precision, 0);
	ft_printf("|\t%*.*x\t| ft_printf\n", width, precision, -1);
	printf("|\t%*.*x\t| printf\n", width, precision, -1);
	ft_printf("|\t%*.*x\t| ft_printf\n", width, precision, UINT_MAX);
	printf("|\t%*.*x\t| printf\n", width, precision, UINT_MAX);
	ft_printf("|\t%*.*x\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%*.*x\t| printf\n\n", width, precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width, precision and left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*.*x\t| ft_printf\n", width, precision, 1);
	printf("|\t%-*.*x\t| printf\n", width, precision, 1);
	ft_printf("|\t%-*.*x\t| ft_printf\n", width, precision, 0);
	printf("|\t%-*.*x\t| printf\n", width, precision, 0);
	ft_printf("|\t%-*.*x\t| ft_printf\n", width, precision, -1);
	printf("|\t%-*.*x\t| printf\n", width, precision, -1);
	ft_printf("|\t%-*.*x\t| ft_printf\n", width, precision, UINT_MAX);
	printf("|\t%-*.*x\t| printf\n", width, precision, UINT_MAX);
	ft_printf("|\t%-*.*x\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%-*.*x\t| printf\n\n", width, precision, INT_MIN);
}

static void test_unsigned_HEX_X(int width, int precision)
{
	printf("\033[1;34m");
	printf("Testing: signed decimal (d)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%X\t\t| ft_printf\n", 1);
	printf("|\t%X\t\t| printf\n", 1);
	ft_printf("|\t%X\t\t| ft_printf\n", 0);
	printf("|\t%X\t\t| printf\n", 0);
	ft_printf("|\t%X\t| ft_printf\n", -1);
	printf("|\t%X\t| printf\n", -1);
	ft_printf("|\t%X\t| ft_printf\n", INT_MAX);
	printf("|\t%X\t| printf\n", INT_MAX);
	ft_printf("|\t%X\t| ft_printf\n", INT_MIN);
	printf("|\t%X\t| printf\n\n", INT_MIN);

	printf("\033[1;33m");
	printf("\ttest precision");
	printf("\033[0m\n");
	ft_printf("|\t%.*X\t\t| ft_printf\n", precision, 1);
	printf("|\t%.*X\t\t| printf\n", precision, 1);
	ft_printf("|\t%.*X\t\t| ft_printf\n", precision, 0);
	printf("|\t%.*X\t\t| printf\n", precision, 0);
	ft_printf("|\t%.*X\t| ft_printf\n", precision, -1);
	printf("|\t%.*X\t| printf\n", precision, -1);
	ft_printf("|\t%.*X\t| ft_printf\n", precision, INT_MAX);
	printf("|\t%.*X\t| printf\n", precision, INT_MAX);
	ft_printf("|\t%.*X\t| ft_printf\n", precision, INT_MIN);
	printf("|\t%.*X\t| printf\n\n", precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15X\t| ft_printf\n", 1);
	printf("|\t%*X\t| printf\n", width, 1);
	ft_printf("|\t%*X\t| ft_printf\n", width, 0);
	printf("|\t%*X\t| printf\n", width, 0);
	ft_printf("|\t%*X\t| ft_printf\n", width, -1);
	printf("|\t%*X\t| printf\n", width, -1);
	ft_printf("|\t%*X\t| ft_printf\n", width, INT_MAX);
	printf("|\t%*X\t| printf\n", width, INT_MAX);
	ft_printf("|\t%*X\t| ft_printf\n", width, INT_MIN);
	printf("|\t%*X\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest fillzero");
	printf("\033[0m\n");
	ft_printf("|\t%0*X\t| ft_printf\n", width, 1);
	printf("|\t%0*X\t| printf\n", width, 1);
	ft_printf("|\t%0*X\t| ft_printf\n", width, 0);
	printf("|\t%0*X\t| printf\n", width, 0);
	ft_printf("|\t%0*X\t| ft_printf\n", width, -1);
	printf("|\t%0*X\t| printf\n", width, -1);
	ft_printf("|\t%0*X\t| ft_printf\n", width, INT_MAX);
	printf("|\t%0*X\t| printf\n", width, INT_MAX);
	ft_printf("|\t%0*X\t| ft_printf\n", width, INT_MIN);
	printf("|\t%0*X\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*X\t| ft_printf\n", width, 1);
	printf("|\t%-*X\t| printf\n", width, 1);
	ft_printf("|\t%-*X\t| ft_printf\n", width, 0);
	printf("|\t%-*X\t| printf\n", width, 0);
	ft_printf("|\t%-*X\t| ft_printf\n", width, -1);
	printf("|\t%-*X\t| printf\n", width, -1);
	ft_printf("|\t%-*X\t| ft_printf\n", width, INT_MAX);
	printf("|\t%-*X\t| printf\n", width, INT_MAX);
	ft_printf("|\t%-*X\t| ft_printf\n", width, INT_MIN);
	printf("|\t%-*X\t| printf\n\n", width, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width and Precision");
	printf("\033[0m\n");
	ft_printf("|\t%*.*X\t| ft_printf\n", width, precision, 1);
	printf("|\t%*.*X\t| printf\n", width, precision, 1);
	ft_printf("|\t%*.*X\t| ft_printf\n", width, precision, 0);
	printf("|\t%*.*X\t| printf\n", width, precision, 0);
	ft_printf("|\t%*.*X\t| ft_printf\n", width, precision, -1);
	printf("|\t%*.*X\t| printf\n", width, precision, -1);
	ft_printf("|\t%*.*X\t| ft_printf\n", width, precision, INT_MAX);
	printf("|\t%*.*X\t| printf\n", width, precision, INT_MAX);
	ft_printf("|\t%*.*X\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%*.*X\t| printf\n\n", width, precision, INT_MIN);

	printf("\033[1;33m");
	printf("\ttest width, precision and left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*.*X\t| ft_printf\n", width, precision, 1);
	printf("|\t%-*.*X\t| printf\n", width, precision, 1);
	ft_printf("|\t%-*.*X\t| ft_printf\n", width, precision, 0);
	printf("|\t%-*.*X\t| printf\n", width, precision, 0);
	ft_printf("|\t%-*.*X\t| ft_printf\n", width, precision, -1);
	printf("|\t%-*.*X\t| printf\n", width, precision, -1);
	ft_printf("|\t%-*.*X\t| ft_printf\n", width, precision, INT_MAX);
	printf("|\t%-*.*X\t| printf\n", width, precision, INT_MAX);
	ft_printf("|\t%-*.*X\t| ft_printf\n", width, precision, INT_MIN);
	printf("|\t%-*.*X\t| printf\n\n", width, precision, INT_MIN);
}

static void test_string_s(int width, int precision)
{
		printf("\033[1;34m");
	printf("Testing: string (s)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%s\t\t| ft_printf\n","test 1");
	printf("|\t%s\t\t| printf\n","test 1");
	ft_printf("|\t%s\t\t| ft_printf\n","");
	printf("|\t%s\t\t| printf\n","");
	ft_printf("|\t%s\t| ft_printf\n",  "     \n     ");
	printf("|\t%s\t| printf\n", "     \n     ");
	ft_printf("|\t%s\t| ft_printf\n",  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");
	printf("|\t%s\t| printf\n",  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");

	printf("\033[1;33m");
	printf("\ttest precision");
	printf("\033[0m\n");
	ft_printf("|\t%.*s\t\t| ft_printf\n", precision,"test 1");
	printf("|\t%.*s\t\t| printf\n", precision,"test 1");
	ft_printf("|\t%.*s\t\t| ft_printf\n", precision,"");
	printf("|\t%.*s\t\t| printf\n", precision,"");
	ft_printf("|\t%.*s\t| ft_printf\n", precision, "     \n     ");
	printf("|\t%.*s\t| printf\n", precision, "     \n     ");
	ft_printf("|\t%.*s\t| ft_printf\n", precision,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");
	printf("|\t%.*s\t| printf\n", precision,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");

	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15s\t| ft_printf\n","test 1");
	printf("|\t%*s\t| printf\n", width,"test 1");
	ft_printf("|\t%*s\t| ft_printf\n", width,"");
	printf("|\t%*s\t| printf\n", width,"");
	ft_printf("|\t%*s\t| ft_printf\n", width, "     \n     ");
	printf("|\t%*s\t| printf\n", width, "     \n     ");
	ft_printf("|\t%*s\t| ft_printf\n", width,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");
	printf("|\t%*s\t| printf\n", width,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*s\t| ft_printf\n", width,"test 1");
	printf("|\t%-*s\t| printf\n", width,"test 1");
	ft_printf("|\t%-*s\t| ft_printf\n", width,"");
	printf("|\t%-*s\t| printf\n", width,"");
	ft_printf("|\t%-*s\t| ft_printf\n", width, "     \n     ");
	printf("|\t%-*s\t| printf\n", width, "     \n     ");
	ft_printf("|\t%-*s\t| ft_printf\n", width,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");
	printf("|\t%-*s\t| printf\n", width,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");

	printf("\033[1;33m");
	printf("\ttest width and Precision");
	printf("\033[0m\n");
	ft_printf("|\t%*.*s\t| ft_printf\n", width, precision,"test 1");
	printf("|\t%*.*s\t| printf\n", width, precision,"test 1");
	ft_printf("|\t%*.*s\t| ft_printf\n", width, precision,"");
	printf("|\t%*.*s\t| printf\n", width, precision,"");
	ft_printf("|\t%*.*s\t| ft_printf\n", width, precision, "     \n     ");
	printf("|\t%*.*s\t| printf\n", width, precision, "     \n     ");
	ft_printf("|\t%*.*s\t| ft_printf\n", width, precision,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");
	printf("|\t%*.*s\t| printf\n", width, precision,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");

	printf("\033[1;33m");
	printf("\ttest width, precision and left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*.*s\t| ft_printf\n", width, precision,"test 1");
	printf("|\t%-*.*s\t| printf\n", width, precision,"test 1");
	ft_printf("|\t%-*.*s\t| ft_printf\n", width, precision,"");
	printf("|\t%-*.*s\t| printf\n", width, precision,"");
	ft_printf("|\t%-*.*s\t| ft_printf\n", width, precision, "     \n     ");
	printf("|\t%-*.*s\t| printf\n", width, precision, "     \n     ");
	ft_printf("|\t%-*.*s\t| ft_printf\n", width, precision,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");
	printf("|\t%-*.*s\t| printf\n", width, precision,  "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Interdum consectetur libero id faucibus. In aliquam sem fringilla ut morbi tincidunt. Cras adipiscing enim eu turpis egestas pretium aenean pharetra. Et malesuada fames ac turpis. Nec sagittis aliquam malesuada bibendum arcu vitae elementum curabitur vitae. Posuere sollicitudin aliquam ultrices sagittis orci a scelerisque. Nibh sit amet commodo nulla. Enim ut sem viverra aliquet eget sit. Iaculis urna id volutpat lacus. Posuere morbi leo urna molestie. Et pharetra pharetra massa massa ultricies mi quis hendrerit. Varius quam quisque id diam vel quam elementum pulvinar. Massa placerat duis ultricies lacus. Dignissim convallis aenean et tortor at risus viverra. Urna molestie at elementum eu. Feugiat in ante metus dictum at tempor commodo ullamcorper a. Sit amet facilisis magna etiam tempor. In egestas erat imperdiet sed euismod nisi porta lorem. Vestibulum morbi blandit cursus risus. Ipsum dolor sit amet consectetur adipiscing elit. Massa tincidunt nunc pulvinar sapien. Et egestas quis ipsum suspendisse ultrices gravida dictum fusce. Gravida in fermentum et sollicitudin. Mauris commodo quis imperdiet massa tincidunt nunc. Aenean euismod elementum nisi quis eleifend quam adipiscing vitae. Eu non diam phasellus vestibulum lorem sed. Leo in vitae turpis massa. Duis at tellus at urna condimentum mattis pellentesque. Consectetur libero id faucibus nisl tincidunt eget. Laoreet non curabitur gravida arcu ac tortor dignissim. Felis eget velit aliquet sagittis. Massa vitae tortor condimentum lacinia quis vel eros donec. Sed lectus vestibulum mattis ullamcorper velit sed ullamcorper. Hac habitasse platea dictumst quisque sagittis. In est ante in nibh mauris cursus mattis. Pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Et magnis dis parturient montes. Convallis posuere morbi leo urna molestie at elementum eu facilisis. Nisi lacus sed viverra tellus in hac. Sapien eget mi proin sed libero. Aenean vel elit scelerisque mauris pellentesque pulvinar pellentesque. Lacinia at quis risus sed vulputate odio ut enim blandit. Nibh mauris cursus mattis molestie a iaculis at. Eget felis eget nunc lobortis mattis aliquam faucibus purus in. Tristique risus nec feugiat in fermentum posuere. Nullam vehicula ipsum a arcu cursus vitae congue mauris rhoncus. Eget nunc lobortis mattis aliquam faucibus. Elit sed vulputate mi sit amet mauris commodo. Vulputate odio ut enim blandit. Sed euismod nisi porta lorem mollis aliquam ut porttitor. Lacus luctus accumsan tortor posuere ac ut. Malesuada fames ac turpis egestas maecenas pharetra convallis. Lacus sed turpis tincidunt id aliquet. Viverra accumsan in nisl nisi scelerisque eu. Rutrum quisque non tellus orci ac auctor. Vitae ultricies leo integer malesuada nunc vel risus. Scelerisque eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada. Et ligula ullamcorper malesuada proin libero nunc consequat interdum. Nisl rhoncus mattis rhoncus urna. Vitae suscipit tellus mauris a diam. Pellentesque eu tincidunt tortor aliquam nulla facilisi. Pharetra convallis posuere morbi leo. Nec ullamcorper sit amet risus nullam eget. Libero enim sed faucibus turpis in eu mi bibendum neque. Quisque id diam vel quam elementum pulvinar etiam. Consequat nisl vel pretium lectus quam id leo in. Scelerisque felis imperdiet proin fermentum. Ut etiam sit amet nisl purus in mollis nunc sed. Sociis natoque penatibus et magnis dis. Fermentum iaculis eu non diam phasellus vestibulum lorem sed. Cursus eget nunc scelerisque viverra mauris in.");
}

static void test_character_c(int width)
{
	printf("\033[1;34m");
	printf("Testing: signed decimal (d)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%c\t| ft_printf\n", 'a');
	printf("|\t%c\t| printf\n", 'a');
	ft_printf("|\t%c\t| ft_printf\n", 'Z');
	printf("|\t%c\t| printf\n", 'Z');
	ft_printf("|\t%c\t| ft_printf\n", '!');
	printf("|\t%c\t| printf\n", '!');
	ft_printf("|\t%c\t| ft_printf\n", '\t');
	printf("|\t%c\t| printf\n", '\t');
	ft_printf("|\t%c\t| ft_printf\n", '\0');
	printf("|\t%c\t| printf\n\n", '\0');

	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15c\t| ft_printf\n", 'a');
	printf("|\t%*c\t| printf\n", width, 'a');
	ft_printf("|\t%*c\t| ft_printf\n", width, 'Z');
	printf("|\t%*c\t| printf\n", width, 'Z');
	ft_printf("|\t%*c\t| ft_printf\n", width, '!');
	printf("|\t%*c\t| printf\n", width, '!');
	ft_printf("|\t%*c\t| ft_printf\n", width, '\t');
	printf("|\t%*c\t| printf\n", width, '\t');
	ft_printf("|\t%*c\t| ft_printf\n", width, '\0');
	printf("|\t%*c\t| printf\n\n", width, '\0');

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*c\t| ft_printf\n", width, 'a');
	printf("|\t%-*c\t| printf\n", width, 'a');
	ft_printf("|\t%-*c\t| ft_printf\n", width, 'Z');
	printf("|\t%-*c\t| printf\n", width, 'Z');
	ft_printf("|\t%-*c\t| ft_printf\n", width, '!');
	printf("|\t%-*c\t| printf\n", width, '!');
	ft_printf("|\t%-*c\t| ft_printf\n", width, '\t');
	printf("|\t%-*c\t| printf\n", width, '\t');
	ft_printf("|\t%-*c\t| ft_printf\n", width, '\0');
	printf("|\t%-*c\t| printf\n\n", width, '\0');
}

static void test_pointer_p(int width, int precision)
{
	int		*ip;
	char	*cp;
	void	*vp;

	ip = &precision;
	cp = "test";
	vp = NULL;
	
	printf("\033[1;34m");
	printf("Testing: pointer (p)");
	printf("\033[0m\n");
	printf("\033[1;33m");
	printf("\ttest base");
	printf("\033[0m\n");
	ft_printf("|\t%p\t\t| ft_printf\n", ip);
	printf("|\t%p\t\t| printf\n", ip);
	ft_printf("|\t%p\t\t| ft_printf\n", cp);
	printf("|\t%p\t\t| printf\n", cp);
	ft_printf("|\t%p\t| ft_printf\n", vp);
	printf("|\t%p\t| printf\n", vp);
	
	printf("\033[1;33m");
	printf("\ttest width");
	printf("\033[0m\n");
	ft_printf("|\t%15p\t| ft_printf\n", ip);
	printf("|\t%*p\t| printf\n", width, ip);
	ft_printf("|\t%*p\t| ft_printf\n", width, cp);
	printf("|\t%*p\t| printf\n", width, cp);
	ft_printf("|\t%*p\t| ft_printf\n", width, vp);
	printf("|\t%*p\t| printf\n", width, vp);

	printf("\033[1;33m");
	printf("\ttest left allign");
	printf("\033[0m\n");
	ft_printf("|\t%-*p\t| ft_printf\n", width, ip);
	printf("|\t%-*p\t| printf\n", width, ip);
	ft_printf("|\t%-*p\t| ft_printf\n", width, cp);
	printf("|\t%-*p\t| printf\n", width, cp);
	ft_printf("|\t%-*p\t| ft_printf\n", width, vp);
	printf("|\t%-*p\t| printf\n", width, vp);
}

int	main(int argc, char **argv)
{
	int	precision;
	int	width;
	char conchar;

	precision = 5;
	width = 15;
	if (argc != 2)
	{
		printf("\033[1;31m");
		printf("Invalid number of arguments.");
		printf("\033[0m\n");
		return (0);
	}
	if (!ft_strchr(CONVERSION_CHAR, argv[1][0]))
	{
		printf("\033[1;31m");
		printf("Invalid argument.");
		printf("\033[0m\n");
		return (0);
	}
	conchar = argv[1][0];
	if (conchar == '%')
		test_percentile();
	else if (conchar == 'i')
		test_signed_dec_i(width, precision);
	else if (conchar == 'd')
		test_signed_dec_d(width, precision);
	else if (conchar == 'u')
		test_unsigned_dec_u(width, precision);
	else if (conchar == 'x')
		test_unsigned_hex_x(width, precision);
	else if (conchar == 'X')
		test_unsigned_HEX_X(width, precision);
	else if (conchar == 's')
		test_string_s(width, precision);
	else if (conchar == 'c')
		test_character_c(width);
	else if (conchar == 'p')
		test_pointer_p(width, precision);
	return (0);
}
