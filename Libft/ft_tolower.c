/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:40:25 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("convert uppercase letters to lowercase:\n\n");

	// expected output: a
	printf("converting a: %c\n", ft_tolower('A'));

	// expected output: z
	printf("converting z: %c\n", ft_tolower('Z'));

	// expected output: 4
	printf("checking digit 4: %c\n", ft_tolower('4'));

	// expected output: !
	printf("checking special character: %c\n", ft_tolower('!'));

	// expected output: b
	printf("checking lowercase letter b: %c\n", ft_tolower('b'));

	return (0);
}
*/
