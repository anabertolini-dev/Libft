/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:25:53 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/17 12:45:07 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * (-1);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = (nb % 10) + '0';
	ft_putchar_fd(c, fd);
}
/*
#include <stdio.h>
int	main(void)
{
	// expected output: 42
	printf("writing '42': ");
	ft_putnbr_fd(42, 1);
	printf("\n");

	// expected output: -4898
	printf("writing '-4898': ");
	ft_putnbr_fd(-4898, 1);
	printf("\n");

	// expected output: 123456789
	printf("writing a big number '123456789': ");
	ft_putnbr_fd(123456789, 1);
	printf("\n");

	return (0);
}
*/
