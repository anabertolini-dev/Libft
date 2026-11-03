/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:50:37 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:10:39 by ana-cmar         ###   ########.fr       */
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
	char	str1[] = "Bocal";
	char	str2[] = "Bocai";
	char	str3[] = "Cluster";

	// expected output: 0
	printf("comparing two identical strings: %d\n",
		ft_strncmp(str1, str1, 5));

	// expected output: 0
	printf("comparing the first 4 characters: %d\n",
		ft_strncmp(str1, str2, 4));

	// expected output: positive
	printf("comparing strings with a difference at the last character: %d\n",
		ft_strncmp(str1, str2, 5));

	// expected output: negative
	printf("comparing strings with a difference at the first character: %d\n",
		ft_strncmp(str1, str3, 3));

	// expected output: 0
	printf("comparing strings with a limit of zero: %d\n",
		ft_strncmp(str1, str3, 0));

	// expected output: negative
	printf("comparing a shorter string with a longer string: %d\n",
		ft_strncmp("42", "42 Porto", 8));

	return (0);
}
*/