/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuonen <zuonen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:54:20 by zuonen            #+#    #+#             */
/*   Updated: 2024/10/23 18:45:25 by zuonen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			string[j++] = s[i];
		}
		i++;
	}
	string[j] = '\0';
	return (string);
}
