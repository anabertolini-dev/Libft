/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:37:29 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:10:23 by ana-cmar         ###   ########.fr       */
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
	// expected output: 7
	printf("string length of 42Porto: %zu\n", ft_strlen("42Porto"));

	// expected output: 0
	printf("string length of an empty string: %zu\n", ft_strlen(""));

	// expected output: 14
	printf("string length of Keep swimming!: %zu\n",
		ft_strlen("Keep swimming!"));

	// expected output: 5
	printf("string length of Bocal: %zu\n", ft_strlen("Bocal"));

	return (0);
}
*/