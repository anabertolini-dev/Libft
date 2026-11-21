/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 23:09:37 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/21 14:13:25 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	*str;

	printf("allocate memory and initialize all bytes to zero:\n\n");

	// expected output: 0
	str = ft_calloc(8, 1);
	if (str == NULL)
		return (1);
	printf("checking the first byte: %d\n", str[0]);
	free(str);

	return (0);
}
*/
