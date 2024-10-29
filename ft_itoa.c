/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuonen <zuonen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:41:24 by zuonen            #+#    #+#             */
/*   Updated: 2024/10/24 12:28:21 by zuonen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculator(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len ++;
		n = -n;
	}
	while (n / 10 > 0)
	{
		len ++;
		n = n / 10;
	}
	if (n < 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		num;
	char	*str;

	num = n;
	len = calculator(n);
	if (num == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len-- > 0 && num > 0)
	{
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
