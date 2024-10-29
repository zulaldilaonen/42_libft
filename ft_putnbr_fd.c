/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zuonen <zuonen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:45:18 by zuonen            #+#    #+#             */
/*   Updated: 2024/10/23 15:07:38 by zuonen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n <= 2147483647 && n >= -2147483648)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
		}
		else if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			ft_putchar_fd((n + 48), fd);
		}
		else
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
	}
}
