/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuonen <zuonen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:54:12 by zuonen            #+#    #+#             */
/*   Updated: 2024/10/23 15:08:22 by zuonen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	k;

	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	i = 0;
	k = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		if (i++ > k)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[k]) != NULL)
	{
		if (k-- <= i)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, i, k + 1 - i));
}
