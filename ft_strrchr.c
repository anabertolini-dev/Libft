/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 10:50:41 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	new_c;

	i = ft_strlen(s);
	new_c = (unsigned char)c;
	while (1)
	{
		if ((unsigned char)s[i] == new_c)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "42Porto";

	printf("find the last occurrence of a character in a string:\n\n");

	// expected output: Porto
	printf("searching for P: %s\n", ft_strrchr(str, 'P'));

	// expected output: 42Porto
	printf("searching for 4: %s\n", ft_strrchr(str, '4'));

	// expected output: o
	printf("searching for o: %s\n", ft_strrchr(str, 'o'));

	// expected output: empty string
	printf("searching for the null terminator: %s\n",
		ft_strrchr(str, '\0'));

	return (0);
}
*/
