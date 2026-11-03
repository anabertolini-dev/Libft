/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:33:50 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/05 15:27:18 by ana-cmar         ###   ########.fr       */
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
#include <stdio.h>

int	main(void)
{
	// expected output: 1
	printf("checking uppercase letter A: %d\n", ft_isalnum('A'));

	// expected output: 1
	printf("checking lowercase letter z: %d\n", ft_isalnum('z'));

	// expected output: 1
	printf("checking digit 5: %d\n", ft_isalnum('5'));

	// expected output: 0
	printf("checking symbol @: %d\n", ft_isalnum('@'));

	return (0);
}
*/