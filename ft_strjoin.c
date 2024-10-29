/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuonen <zuonen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:50:30 by zuonen            #+#    #+#             */
/*   Updated: 2024/10/23 15:07:59 by zuonen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*all;
	int		i;
	int		j;
	int		len1;
	int		len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	all = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!all)
		return (NULL);
	while (s1[i] != '\0')
	{
		all[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		all[i++] = s2[j++];
	}
	all[i] = '\0';
	return (all);
}
