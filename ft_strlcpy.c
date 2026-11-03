/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 22:46:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:09:41 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
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
	char	dst3[20] = "Bocal";

	// expected output: Intra
	ft_strlcpy(dst1, "Intra", sizeof(dst1));
	printf("copying the entire string: %s\n", dst1);

	// expected output: Port
	ft_strlcpy(dst2, "Portugal", sizeof(dst2));
	printf("copying a partial string: %s\n", dst2);

	// expected output: original length: 7 | destination: Bocal
	printf("original length: %zu | destination: %s\n",
		ft_strlcpy(dst3, "Cluster", 0), dst3);

	return (0);
}
*/