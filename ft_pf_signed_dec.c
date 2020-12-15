/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pf_signed_dec.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 11:54:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/15 18:38:46 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "Libft/libft.h"
#include "ft_printf.h"

int	ft_pf_signed_dec(int nbr, t_flags *flags)
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
