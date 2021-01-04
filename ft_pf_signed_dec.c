/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pf_signed_dec.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 11:54:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2021/01/04 12:37:39 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "Libft/libft.h"
#include "ft_printf.h"

static void	ft_pf_build_precision(char **arr, t_flags *flags, int len)
{
	int		len;
	int		size;
	char	*arr;

	arr = ft_itoa_base(nbr, B_DEC);
	if (arr == NULL)
		return (-1);
	if (arr[0] == '-')
		flags->sign = 1;
	len = ft_strlen(arr);
	if (flags->precision > len && build_precision(len, flags, &arr) == -1)
		return (-1);
	size = det_size(len, flags);
	if (prep_ret(size, flags) == -1)
		return (-1);
	size--;
	len = ft_strlen(arr) - 1;
	if (fill_ret(len, size, &arr, flags) == -1)
		return (-1);
	return (1);
}

int			ft_pf_signed_dec(int nbr, t_flags *flags)
{
	int		len;
	char	*arr;

	arr = ft_itoa_base(nbr, 10);
	if (arr == NULL)
		return (-1);
	if (arr[0] == '-')
		flags->sign = 1;
	len = ft_strlen(arr);
	if (flags->precision >= 0)
		flags->flag[(int)'0'] = 0;
	if (flags->precision > len)
		ft_pf_build_precision(&arr, flags, len);
	return (ft_pf_build_return(&arr, flags, len));
}
