/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:40:01 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:36:28 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	src_len = ft_strlen(src);
	if (i == size)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst1[20] = "hello";
	char	dst2[10] = "42";
	char	dst3[20] = "libft";
	char	dst4[20] = "";

	printf("concatenate two strings:\n\n");

	// expected output: 11
	printf("appending world to hello: %zu\n",
		ft_strlcat(dst1, " world", sizeof(dst1)));

	// expected output: 7
	printf("appending porto to 42: %zu\n",
		ft_strlcat(dst2, "porto", sizeof(dst2)));

	// expected output: 7
	printf("concatenating with destination size zero: %zu\n",
		ft_strlcat(dst3, "cluster", 0));

	// expected output: 5
	printf("appending to an empty destination: %zu\n",
		ft_strlcat(dst4, "hello", sizeof(dst4)));

	return (0);
}
*/
