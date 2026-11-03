/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:40:01 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:08:54 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "ana-camar";
	char	str2[10] = "42Porto";

	// expected output: XXXXXamar
	ft_memset(str1, 'X', 5);
	printf("filling 5 bytes with X: %s\n", str1);

	// expected output: 42Porto
	ft_memset(str2, 'A', 0);
	printf("filling zero bytes: %s\n", str2);

	return (0);
}
*/