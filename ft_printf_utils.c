/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 17:13:19 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/15 21:28:24 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	det_size(int len, t_flags *flags)
{
	if (flags->width > len)
		len = flags->width;
	if (flags->precision > len)
		len = flags->precision;
	return (len);
}

int		build_precision(int len, t_flags *flags, char **arr)
{
	char	*temp;
	int		preslen;

	preslen = flags->precision + flags->sign;
	temp = malloc((preslen + 1) * sizeof(char));
	if (!temp)
		return (-1);
	ft_memset(temp, '0', preslen);
	temp[preslen + flags->sign] = '\0';
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
	return (1);
}

int		prep_ret(int size, t_flags *flags)
{
	flags->ret = malloc((size + 1) * sizeof(char));
	if (flags->ret == NULL)
		return (-1);
	ft_memset(flags->ret, ' ', size);
	flags->ret[size] = '\0';
	return (1);
}

int		fill_ret(int len, int size, char **arr, t_flags *flags)
{
	if (flags->flag[(int)'-'] == 1)
		ft_memcpy(flags->ret, *arr, len);
	else
	{
		if (flags->precision >= 0)
			flags->flag[(int)'0'] = 0;
		while (len >= flags->sign)
		{
			flags->ret[size] = (*arr)[len];
			size--;
			len--;
		}
		while (flags->flag[(int)'0'] == 1 && size >= flags->sign)
		{
			flags->ret[size] = '0';
			size--;
		}
		if (flags->sign == 1)
			flags->ret[size] = (*arr)[len];
	}
	free(*arr);
	return (1);
}
