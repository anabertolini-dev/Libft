/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:48:06 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:05:37 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "42Porto";
	char	str2[10] = "Libft";
	char	str3[10] = "Rush";

	// expected output: 42
	ft_bzero(str1 + 2, 5);
	printf("erasing 5 bytes: %s\n", str1);

	// expected output: (empty string)
	ft_bzero(str2, 2);
	printf("erasing the first 2 bytes: %s\n", str2);

	// expected output: Rush
	ft_bzero(str3, 0);
	printf("erasing no bytes: %s\n", str3);

	return (0);
}
*/