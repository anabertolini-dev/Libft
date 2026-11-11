/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:47:01 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:30:56 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*source;

	if (dest == src || n == 0)
		return (dest);
	dst = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (dst > source)
	{
		while (n--)
			dst[n] = source[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "ABCDE";
	char	str2[10] = "ABCDE";
	char	str3[20] = "ABCDE";

	printf("copy bytes from source to destination, safely handling ");
	printf("overlapping memory:\n\n");

	// expected output: BCDEE
	ft_memmove(str1, str1 + 1, 4);
	printf("moving 4 bytes from right to left: %s\n", str1);

	// expected output: AABCD
	ft_memmove(str2 + 1, str2, 4);
	printf("moving 4 bytes from left to right: %s\n", str2);

	// expected output: Cluster
	ft_memmove(str3, "Cluster", 8);
	printf("replacing the entire string: %s\n", str3);

	return (0);
}
*/
