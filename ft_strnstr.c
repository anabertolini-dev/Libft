/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:09:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:25:34 by ana-cmar         ###   ########.fr       */
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
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j] && ((i + j) < len))
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
	// expected output: world
	printf("locate (wor): %s\n", ft_strnstr("hello word", "wor", 15));

    // expected output: porto
	printf("locate (por):%s\n", ft_strnstr("po porto", "por", 15));

    // expected output: ana
	printf("locate (ana):%s\n", ft_strnstr("mariana", "ana", 15));
	return (0);
}
*/