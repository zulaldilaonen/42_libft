/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuonen <zuonen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:43:53 by zuonen            #+#    #+#             */
/*   Updated: 2024/10/23 15:07:18 by zuonen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*source;

	i = 0;
	source = (char *)src;
	dest = (char *)dst;
	if (source < dest)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dest[i] = source[i];
		}
	}
	else
	{
		ft_memcpy(dest, source, len);
	}
	return (dest);
}
