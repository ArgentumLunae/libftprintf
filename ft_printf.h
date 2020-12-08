/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:39:24 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/08 18:46:42 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "Libft/libft.h"
# include <stdarg.h>
# define TYPESYMBOLS "cspdiuxX%lh"
# define FLAGSYMBOLS "-0# +"
# define B_HEXDEC "0123456789abcdef"
# define B_DEC "0123456789"

typedef struct	s_flags
{
	int		flag[128];
	int		width;
	int		precision;
	int		sign;
	char	*ret;
}				t_flags;
void			pf_parse(t_flags *flags, const char **format, va_list *args);
size_t			det_size(int len, t_flags *flags);
int				ft_pf_signed_dec(int nbr, t_flags *flags);
#endif
