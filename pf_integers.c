/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_integers.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 16:30:09 by mteerlin      #+#    #+#                 */
/*   Updated: 2021/01/20 16:45:14 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdlib.h>

int		pf_signed_dec(int nbr, t_mods *mods)
{
	int		templen;
	int		totlen;
	char	*temp;

	temp = ft_itoa_base((long long int)nbr, 10);
	if (temp == NULL)
		return (-1);
	if (nbr < 0)
		mods->sign = 1;
	templen = ft_strlen(temp);
	if (mods->precision > templen)
	{
		if (build_precision(templen, mods, &temp) < 0)
			return (-1);
	}
	templen = ft_strlen(temp);
	totlen = det_size(templen, mods);
	if (prep_modstr(totlen, mods))
		return (fill_modstr(templen, totlen, &temp, mods));
	return (-1);
}

int		pf_unsigned_base(unsigned int nbr, unsigned int base, \
							t_mods *mods, const char format)
{
	int		templen;
	int		totlen;
	char	*temp;

	temp = ft_itoa_base(nbr, base);
	if (temp == NULL)
		return (-1);
	templen = ft_strlen(temp);
	if (mods->precision > templen && build_precision(templen, mods, &temp) < 0)
		return (-1);
	templen = ft_strlen(temp);
	totlen = det_size(templen, mods);
	if (prep_modstr(totlen, mods) < 0)
		return (-1);
	if (fill_modstr(templen, totlen, &temp, mods) < 0)
		return (-1);
	templen = 0;
	while (format == 'X' && mods->modstr[templen] != '\0')
	{
		mods->modstr[templen] = ft_toupper(mods->modstr[templen]);
		templen++;
	}
	return (totlen);
}

int	pf_pointer(void *ptr, t_mods *mods)
{
	int		templen;
	int		totlen;
	char	*temp;
	char	*temp2;

	if (ptr == NULL)
		temp = ft_strdup("(nil)");
	else
	{
		temp = ft_itoa_base((long long int)ptr, 16);
		temp2 = ft_strjoin("0x", temp);
		free(temp);
		temp = temp2;
	}
	if (temp == NULL)
		return (-1);
	templen = ft_strlen(temp);
	totlen = det_size(templen, mods);
	if (prep_modstr(totlen, mods) < 0)
		return (-1);
	if (fill_modstr(templen, totlen, &temp, mods) < 0)
		return (-1);
	return (1);
}
