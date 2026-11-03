/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:11:13 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	new_c;

	i = ft_strlen(s);
	new_c = (unsigned char)c;
	while (i > 0)
	{
		if (s[i] == new_c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "42Porto";

	// expected output: Porto
	printf("finding the first occurrence of P: %s\n", ft_strrchr(str, 'P'));

	// expected output: 42Porto
	printf("finding the first occurrence of 4: %s\n", ft_strrchr(str, '4'));

	// expected output: o
	printf("finding the first occurrence of o: %s\n", ft_strrchr(str, 'o'));

	// expected output: (null)
	printf("searching for a character that does not exist: %s\n",
		ft_strrchr(str, 'x'));

	// expected output: 
	printf("finding the null terminator: %s\n", ft_strrchr(str, '\0'));

	return (0);
}
*/