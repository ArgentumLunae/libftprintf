/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 13:39:24 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/12/05 18:10:45 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "/Users/mteerlin/Documents/ProjectLibft/Libft/libft.h"
# include <stdarg.h>
# define TYPESYMBOLS "cspdiuxX%lh"
# define FLAGSYMBOLS "-0# +"

typedef struct	s_flags
{
	int		rightallign;
	int		zero;
	int		hash;
	int		space;
	int		plus;
	int		width;
	int		precision;
	char	*form;
}				t_flags;
void			pf_parse(t_flags *flags, const char **format, va_list *args);
#endif
