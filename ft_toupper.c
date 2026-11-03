/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:11:32 by ana-cmar         ###   ########.fr       */
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
	// expected output: A
	printf("converting lowercase letter (a): %c\n", ft_toupper('a'));

	// expected output: Z
	printf("converting lowercase letter (z): %c\n", ft_toupper('z'));

	// expected output: 4
	printf("checking digit (4): %c\n", ft_toupper('4'));

	return (0);
}
*/