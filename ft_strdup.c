/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuonen <zuonen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:49:14 by zuonen            #+#    #+#             */
/*   Updated: 2024/10/23 15:07:53 by zuonen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	int		len;
	char	*newstr;

	len = ft_strlen(s1) + 1;
	newstr = (char *)malloc(len * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		newstr[index] = s1[index];
		index++;
	}
	newstr[index] = '\0';
	return (newstr);
}
