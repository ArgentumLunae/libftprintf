/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 14:35:47 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/13 11:10:58 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	offset;
	char	*tdest;
	char	*tsrc;

	tdest = (char *)dest;
	tsrc = (char *)src;
	offset = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest >= src)
	{
		while (0 < n)
		{
			tdest[n - 1] = tsrc[n - 1];
			n--;
		}
	}
	else
		while (offset < n)
		{
			tdest[offset] = tsrc[offset];
			offset++;
		}
	return ((void *)dest);
}
