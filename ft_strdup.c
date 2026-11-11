/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:09:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 11:19:31 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
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
int	main(void)
{
	char	*dest;

	// expected output: ana-cmar
	dest = ft_strdup("ana-cmar");
	printf("duplicate the string (ana-cmar): %s\n", dest);
	free(dest);

	// expected output: milestone
	dest = ft_strdup("milestone");
	printf("duplicate the string (milestone): %s\n", dest);
	free(dest);

	// expected output: libft
	dest = ft_strdup("libft");
	printf("duplicate the string (libft): %s\n", dest);
	free(dest);

	return (0);
}
*/
