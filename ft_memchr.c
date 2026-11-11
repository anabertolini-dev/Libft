/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:55:37 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:58:21 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		new_c;
	const unsigned char	*new_s;

	i = 0;
	new_c = (unsigned char)c;
	new_s = (const unsigned char *)s;
	while (i < n)
	{
		if (new_s[i] == new_c)
			return ((void *)&new_s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "42Porto";

	printf("find the first occurrence of a byte in memory:\n\n");

	// expected output: Porto
	printf("searching for P: %s\n",
		(char *)ft_memchr(str, 'P', 7));

	// expected output: orto
	printf("searching for o: %s\n",
		(char *)ft_memchr(str, 'o', 7));

	// expected output: (null)
	printf("searching for a missing character: %s\n",
		(char *)ft_memchr(str, 'x', 7));

	// expected output: (null)
	printf("searching with a limit of zero: %s\n",
		(char *)ft_memchr(str, '4', 0));

		return (0);
}
*/
