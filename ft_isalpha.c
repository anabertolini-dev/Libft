/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:28:43 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 23:19:11 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("check if the input is an alphabetic letter:\n\n");

	// expected output: 1
	printf("checking uppercase letter A: %d\n", ft_isalpha('A'));

	// expected output: 1
	printf("checking lowercase letter z: %d\n", ft_isalpha('z'));

	// expected output: 0
	printf("checking number 5: %d\n", ft_isalpha('5'));

	// expected output: 0
	printf("checking symbol @: %d\n", ft_isalpha('@'));

	return (0);
}
*/
