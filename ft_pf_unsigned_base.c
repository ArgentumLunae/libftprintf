/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pf_unsigned_base.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 17:09:04 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/15 20:02:02 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_unsigned_base(unsigned int nbr, t_flags *flags, \
							char *base, const char format)
{
	int		len;
	int		size;
	char	*arr;

	arr = ft_itoa_base(nbr, base);
	if (arr == NULL)
		return (-1);
	len = ft_strlen(arr);
	if (flags->precision > len && build_precision(len, flags, &arr) == -1)
		return (-1);
	size = det_size(len, flags);
	if (prep_ret(size, flags) == -1)
		return (-1);
	size--;
	if (fill_ret((ft_strlen(arr) - 1), size, &arr, flags) == -1)
		return (-1);
	len = 0;
	while (format == 'X' && flags->ret[len] != '\0')
	{
		flags->ret[len] = ft_toupper(flags->ret[len]);
		len++;
	}
	return (1);
}
