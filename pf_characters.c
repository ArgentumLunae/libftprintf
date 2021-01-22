/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_characters.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:18:18 by mteerlin      #+#    #+#                 */
/*   Updated: 2021/01/20 12:27:06 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdlib.h>

int	pf_string(char *str, t_mods *mods)
{
	int		len;
	int		size;
	char	*arr;

	len = ft_strlen(str);
	if (mods->precision < len && mods->precision > 0)
	{
		arr = (char *)malloc((mods->precision + 1) * sizeof(char));
		if (!arr)
			return (-1);
		ft_strlcpy(arr, str, (mods->precision + 1));
	}
	else
	{
		arr = ft_strdup(str);
		if (!arr)
			return (-1);
	}
	len = ft_strlen(arr);
	size = det_size(len, mods);
	if (prep_modstr(size, mods) == -1)
		return (-1);
	if (fill_modstr((int)ft_strlen(arr), size, &arr, mods) == -1)
		return (-1);
	return (1);
}

int	pf_character(int c, t_mods *mods)
{
	if (mods->width > 1)
	{
		mods->modstr = malloc((mods->width - 1) * sizeof(char));
		if (mods->modstr == NULL)
			return (-1);
		ft_memset(mods->modstr, ' ', (mods->width - 1));
		mods->modstr[mods->width - 1] = '\0';
	}
	else
		mods->modstr = ft_calloc(1, sizeof(char));
	if (mods->lallign > 0)
	{
		ft_putchar_fd(c, 1);
		ft_putstr_fd(mods->modstr, 1);
	}
	else
	{
		ft_putstr_fd(mods->modstr, 1);
		ft_putchar_fd(c, 1);
	}
	ft_bzero(mods->modstr, mods->width);
	return (1);
}
