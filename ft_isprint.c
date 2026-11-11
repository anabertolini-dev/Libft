/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:36:35 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 23:23:11 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("check if the input is a printable ascii char:\n\n");

	// expected output: 1
	printf("checking printable letter A: %d\n", ft_isprint('A'));

	// expected output: 1
	printf("checking printable digit 5: %d\n", ft_isprint('5'));

	// expected output: 1
	printf("checking printable space: %d\n", ft_isprint(' '));

	// expected output: 0
	printf("checking ascii value 31: %d\n", ft_isprint(31));

	// expected output: 0
	printf("checking ascii value 127: %d\n", ft_isprint(127));

	return (0);
}
*/
