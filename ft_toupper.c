/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:39:33 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("convert lowercase letters to uppercase:\n\n");

	// expected output: A
	printf("converting a: %c\n", ft_toupper('a'));

	// expected output: Z
	printf("converting z: %c\n", ft_toupper('z'));

	// expected output: 4
	printf("checking digit 4: %c\n", ft_toupper('4'));

	// expected output: !
	printf("checking special character: %c\n", ft_toupper('!'));

	// expected output: B
	printf("checking uppercase letter B: %c\n", ft_toupper('B'));

	return (0);
}
*/
