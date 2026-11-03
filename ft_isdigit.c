/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:31:25 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/05 15:46:40 by ana-cmar         ###   ########.fr       */
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
	// expected output: 1
	printf("checking digit 5: %d\n", ft_isdigit('5'));

	// expected output: 1
	printf("checking digit 0: %d\n", ft_isdigit('0'));

	// expected output: 1
	printf("checking digit 9: %d\n", ft_isdigit('9'));

	// expected output: 0
	printf("checking letter A: %d\n", ft_isdigit('A'));

	// expected output: 0
	printf("checking symbol @: %d\n", ft_isdigit('@'));

	return (0);
}
*/