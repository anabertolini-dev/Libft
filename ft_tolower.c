/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:11:22 by ana-cmar         ###   ########.fr       */
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
	// expected output: a
	printf("converting uppercase letter (A): %c\n", ft_tolower('A'));

	// expected output: z
	printf("converting uppercase letter (Z): %c\n", ft_tolower('Z'));

	// expected output: 4
	printf("checking digit (4): %c\n", ft_tolower('4'));

	return (0);
}
*/