/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:33:50 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 23:21:34 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("check if the input is an alphanumeric character:\n\n");

	// expected output: 1
	printf("checking uppercase letter A: %d\n", ft_isalnum('A'));

	// expected output: 1
	printf("checking lowercase letter z: %d\n", ft_isalnum('z'));

	// expected output: 1
	printf("checking number 5: %d\n", ft_isalnum('5'));

	// expected output: 0
	printf("checking symbol @: %d\n", ft_isalnum('@'));

	return (0);
}
*/
