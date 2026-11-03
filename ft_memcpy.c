/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:38:21 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:07:58 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*source;
	unsigned char		*destination;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest1[20] = "Dest";
	char	dest2[20] = "Dest";
	char	dest3[20] = "Dest";

	// expected output: Cluster
	ft_memcpy(dest1, "Cluster", 7);
	printf("copying 7 bytes from Cluster: %s\n", dest1);

	// expected output: Loun
	ft_memcpy(dest2, "Lounge", 6);
	printf("copying 4 bytes from Lounge: %s\n", dest2);

	// expected output: Dest
	ft_memcpy(dest3, "Lounge", 0);
	printf("copying zero bytes: %s\n", dest3);

	return (0);
}
*/