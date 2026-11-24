/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:42:39 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 14:52:54 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_number(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb == 0)
		count++;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str_n;
	int		count;
	long	nb;

	nb = n;
	count = len_number(n);
	str_n = malloc(count + 1);
	if (str_n == NULL)
		return (NULL);
	str_n[count] = '\0';
	count--;
	if (nb < 0)
		nb = -nb;
	while (count >= 0)
	{
		if (count == 0 && n < 0)
			str_n[count] = '-';
		else
		{
			str_n[count] = nb % 10 + '0';
			nb = nb / 10;
		}
		count--;
	}
	return (str_n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("convert an integer into a string:\n\n");

	// expected output: 0
	printf("conversion of 0: %s\n", ft_itoa(0));

	// expected output: 42
	printf("conversion of 42: %s\n", ft_itoa(42));

	// expected output: -42
	printf("conversion of -42: %s\n", ft_itoa(-42));

	// expected output: 7
	printf("conversion of 7: %s\n", ft_itoa(7));

	// expected output: 123456
	printf("conversion of 123456: %s\n", ft_itoa(123456));

	// expected output: 2147483647
	printf("conversion of max int: %s\n", ft_itoa(INT_MAX));

	// expected output: -2147483648
	printf("conversion of min int: %s\n", ft_itoa(INT_MIN));

	return (0);
}
*/
