/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pf_string.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 20:02:05 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/15 21:32:16 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_pf_string(char *str, t_flags *flags)
{
	int		len;
	int		size;
	char	*arr;

	len = ft_strlen(str);
	if (flags->precision < len && flags->precision > 0)
	{
		arr = (char *)malloc((flags->precision + 1) * sizeof(char));
		if (!arr)
			return (-1);
		ft_strlcpy(arr, str, (flags->precision + 1));
	}
	else
	{
		arr = ft_strdup(str);
		if (!arr)
			return (-1);
	}
	len = ft_strlen(arr);
	size = det_size(len, flags);
	if (prep_ret(size, flags) == -1)
		return (-1);
	if (fill_ret((int)ft_strlen(arr), size, &arr, flags) == -1)
		return (-1);
	return (1);
}
