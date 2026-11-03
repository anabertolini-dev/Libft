/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 23:09:37 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 16:18:34 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero (pointer, nmemb * size);
	return (pointer);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char *str;

		str = ft_calloc(8, 1);
		printf("%d\n", str[0]);
		free(str);

		return (0);
}
*/