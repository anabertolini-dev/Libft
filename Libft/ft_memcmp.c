/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:55:37 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:59:21 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*new_s1;
	const unsigned char		*new_s2;

	i = 0;
	new_s1 = (const unsigned char *)s1;
	new_s2 = (const unsigned char *)s2;
	while (i < n && new_s1[i] == new_s2[i])
		i++;
	if (i == n)
		return (0);
	return (new_s1[i] - new_s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "42Porto";
	char	str2[] = "42Porto";
	char	str3[] = "42Lisboa";
	char	str4[] = {'A', '\0', 'C'};
	char	str5[] = {'A', '\0', 'D'};

	printf("compare two memory blocks byte by byte:\n\n");

	// expected output: 0
	printf("comparing identical memory blocks: %d\n",
		ft_memcmp(str1, str2, 7));

	// expected output: negative
	printf("comparing different memory blocks: %d\n",
		ft_memcmp(str1, str3, 7));

	// expected output: 0
	printf("comparing the first 2 bytes: %d\n",
		ft_memcmp(str4, str5, 2));

	// expected output: 0
	printf("comparing with a limit of zero: %d\n",
		ft_memcmp(str1, str3, 0));

	return (0);
}
*/
