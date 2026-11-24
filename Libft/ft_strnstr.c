/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:09:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 16:16:48 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && little[j] != '\0'
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("find a substring within a limited number of characters:\n\n");

	// expected output: word
	printf("locate (wor): %s\n", ft_strnstr("hello word", "wor", 15));

    // expected output: porto
	printf("locate (por):%s\n", ft_strnstr("po porto", "por", 15));

    // expected output: ana
	printf("locate (ana):%s\n", ft_strnstr("mariana", "ana", 15));

	// expected output: (null)
	printf("substring outside limit: %s\n",
		ft_strnstr("42Porto", "Porto", 4));

	// expected output: 42Porto
	printf("empty substring: %s\n",
		ft_strnstr("42Porto", "", 0));

	return (0);
}
*/
