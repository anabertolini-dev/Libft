/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:40:01 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:09:28 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (size < i || size == 0)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst1[20] = "Hello";
	char	dst2[20] = "42";
	char	dst3[20] = "Libft";

	// expected output: Hello World
	ft_strlcat(dst1, " World", sizeof(dst1));
	printf("appending World to Hello: %s\n", dst1);

	// expected output: 42Porto
	ft_strlcat(dst2, "Porto", sizeof(dst2));
	printf("appending Porto to 42: %s\n", dst2);

	// expected output: Libft
	ft_strlcat(dst3, "Cluster", 0);
	printf("appending with zero bytes available: %s\n", dst3);

	return (0);
}
*/