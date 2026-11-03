/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:35:06 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/05 15:42:32 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	// expected output: 1
	printf("checking ascii value 65 (A): %d\n", ft_isascii(65));

	// expected output: 1
	printf("checking ascii value 0: %d\n", ft_isascii(0));

	// expected output: 1
	printf("checking ascii value 127: %d\n", ft_isascii(127));

	// expected output: 0
	printf("checking ascii value 128: %d\n", ft_isascii(128));

	// expected output: 0
	printf("checking ascii value -1: %d\n", ft_isascii(-1));

	return (0);
}
*/