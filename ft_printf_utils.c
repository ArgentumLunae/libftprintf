/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 17:13:19 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/08 17:42:35 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	det_size(int len, t_flags *flags)
{
	if (flags->width > len)
		len = flags->width;
	if (flags->precision > len)
		len = flags->precision;
	return (len);
}
