/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 22:46:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 15:07:36 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst1[20];
	char	dst2[5];
	char	dst3[20];
	char	dst4[1];

	printf("copy a string into a destination with limited size:\n\n");

	// Expected output: 5
	printf("copying the entire string: %zu\n",
		ft_strlcpy(dst1, "intra", sizeof(dst1)));
	printf("destination: %s\n\n", dst1);

	// Expected output: 8
	printf("copying a partial string: %zu\n",
		ft_strlcpy(dst2, "portugal", sizeof(dst2)));
	printf("destination: %s\n\n", dst2);

	// Expected output: 7
	printf("copying with destination size zero: %zu\n",
		ft_strlcpy(dst3, "cluster", 0));

	// Expected output: 5
	printf("copying with destination size one: %zu\n",
		ft_strlcpy(dst4, "hello", sizeof(dst4)));
	printf("destination: %s\n\n", dst4);

	// Expected output: 0
	printf("copying an empty string: %zu\n",
		ft_strlcpy(dst1, "", sizeof(dst1)));
	printf("destination: %s\n", dst1);

	return (0);
}
*/
