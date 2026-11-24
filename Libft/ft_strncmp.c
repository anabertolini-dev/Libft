/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:50:37 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:52:12 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "bocal";
	char	str2[] = "bocai";
	char	str3[] = "cluster";

	printf("compare two strings up to n characters:\n\n");

	// expected output: 0
	printf("comparing identical strings: %d\n",
		ft_strncmp(str1, str1, 5));

	// expected output: 0
	printf("comparing the first 4 characters: %d\n",
		ft_strncmp(str1, str2, 4));

	// expected output: positive
	printf("comparing different last characters: %d\n",
		ft_strncmp(str1, str2, 5));

	// expected output: negative
	printf("comparing different first characters: %d\n",
		ft_strncmp(str1, str3, 3));

	return (0);
}
*/
