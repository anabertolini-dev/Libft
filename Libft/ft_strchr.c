/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/17 12:56:12 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	new_c;

	i = 0;
	new_c = (unsigned char)c;
	while ((unsigned char)s[i] != '\0')
	{
		if ((unsigned char)s[i] == new_c)
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

	printf("find the first occurrence of a char in a string:\n\n");

	// expected output: Porto
	printf("searching for P: %s\n", ft_strchr(str, 'P'));

	// expected output: 42Porto
	printf("searching for 4: %s\n", ft_strchr(str, '4'));

	// expected output: orto
	printf("searching for o: %s\n", ft_strchr(str, 'o'));

	// expected output: empty string
	printf("searching for the null terminator: %s\n",
		ft_strchr(str, '\0'));

	return (0);
}
*/
