/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:37:29 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 23:24:45 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("check the length of a string:\n\n");

	// expected output: 7
	printf("length of 42Porto: %zu\n", ft_strlen("42Porto"));

	// expected output: 0
	printf("length of an empty string: %zu\n", ft_strlen(""));

	// expected output: 14
	printf("length of Keep swimming!: %zu\n", ft_strlen("Keep swimming!"));

	// expected output: 5
	printf("string length of Bocal: %zu\n", ft_strlen("Bocal"));

	return (0);
}
*/
