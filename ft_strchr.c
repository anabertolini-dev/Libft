/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:09:06 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	new_c;

	i = 0;
	new_c = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == new_c)
			return ((char *)&s[i]);
		i++;
	}
	if (new_c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "42Porto";

	// expected output: Porto
	printf("finding the first occurrence of P: %s\n", ft_strchr(str, 'P'));

	// expected output: 42Porto
	printf("finding the first occurrence of 4: %s\n", ft_strchr(str, '4'));

	// expected output: o
	printf("finding the first occurrence of o: %s\n", ft_strchr(str, 'o'));

	// expected output: (null)
	printf("searching for a character that does not exist: %s\n",
		ft_strchr(str, 'x'));

	// expected output: 
	printf("finding the null terminator: %s\n", ft_strchr(str, '\0'));

	return (0);
}
*/