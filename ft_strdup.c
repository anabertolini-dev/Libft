/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:09:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:09:15 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src);
	dest = malloc(len + 1);
	if (dest == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*src;

	// expected output: ana-cmar
	src = ft_strdup("ana-cmar");
	printf("duplicate the string (ana-cmar): %s\n", src);

    // expected output: milestone
	src = ft_strdup("milestone");
	printf("duplicate the string (milestone): %s\n", src);

    // expected output: libft
    src = ft_strdup("libft");
	printf("duplicate the string (libft): %s\n", src);

	return (0);
}
*/