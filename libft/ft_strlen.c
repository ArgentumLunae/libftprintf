/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 13:32:03 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/13 11:42:49 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *args)
{
	int len;

	len = 0;
	while (args[len] != '\0')
		len++;
	return (len);
}
