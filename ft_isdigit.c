/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:31:25 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 23:19:16 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("check if the input is a digit:\n\n");

	// expected output: 1
	printf("checking number 5: %d\n", ft_isdigit('5'));

	// expected output: 1
	printf("checking number 0: %d\n", ft_isdigit('0'));

	// expected output: 1
	printf("checking number 9: %d\n", ft_isdigit('9'));

	// expected output: 0
	printf("checking letter A: %d\n", ft_isdigit('A'));

	// expected output: 0
	printf("checking symbol @: %d\n", ft_isdigit('@'));

	return (0);
}
*/
