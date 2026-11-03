/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:47:01 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:08:32 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destination;
	unsigned char		*source;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (destination > source)
	{
		while (n > 0)
		{
			n--;
			destination[n] = source[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "ABCDE";
	char	str2[10] = "ABCDE";
	char	str3[10] = "ABCDE";

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