/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pf_signed_dec.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 11:54:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/14 15:32:07 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "Libft/libft.h"
#include "ft_printf.h"

static void	ft_pf_build_precision(char **arr, t_flags *flags, int len)
{
	int		preslen;
	char	*temp;

	preslen = flags->precision + flags->sign;
	temp = ft_calloc((preslen + 1), sizeof(char));
	if (!temp)
		return (-1);
	ft_memset(temp, '0', preslen);
	while (len >= flags->sign)
	{
		temp[preslen] = (*arr)[len];
		len--;
		preslen--;
	}
	while (preslen >= flags->sign)
	{
		temp[preslen] = '0';
		preslen--;
	}
	if (flags->sign == 1)
		temp[preslen] = (*arr)[len];
	free(*arr);
	*arr = temp;
}

static int	ft_pf_build_return(char **arr, t_flags *flags, int len)
{
	int	size;

	size = det_size(len, flags);
	flags->ret = malloc((size + 1) * sizeof(char));
	if (flags->ret == NULL)
		return (-1);
	ft_memset(flags->ret, ' ', size);
	flags->ret[size] = '\0';
	size--;
	len--;
	if (flags->flag[(int)'-'] == 1)
	{
		ft_memcpy(flags->ret, arr, len + 1);
		free(arr);
	}
	else
	{
		while (len >= flags->sign)
		{
			flags->ret[size] = arr[len];
			size--;
			len--;
		}
		while (flags->flag[(int)'0'] == 1 && size >= flags->sign)
		{
			flags->ret[size] = '0';
			size--;
		}
		if (flags->sign == 1)
		{
			flags->ret[size] = arr[len];
		}
		free(arr);
	}
	return (1);
}

int			ft_pf_signed_dec(int nbr, t_flags *flags)
{
	int		len;
	char	*arr;

	arr = ft_itoa(nbr);
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
