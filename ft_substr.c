/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:25:20 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/17 16:21:26 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	sub_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
		len = s_len - start;
	sub_len = len;
	substr = malloc(sub_len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, sub_len + 1);
	return (substr);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	printf("extract a substring from a string:\n\n");

	// expected output: Amand
	result = ft_substr("Amanda", 0, 5);
	printf("extracting the first 5 characters: %s\n", result);
	free(result);

	// expected output: portu
	result = ft_substr("Porto Portugal", 6, 5);
	printf("extracting 5 characters starting at index 6: %s\n", result);
	free(result);

	// expected output: 42
	result = ft_substr("42 Porto", 0, 2);
	printf("extracting the first 2 characters: %s\n", result);
	free(result);

	// expected output: empty string
	result = ft_substr("hello", 2, 0);
	printf("extracting a substring with length zero: %s\n", result);
	free(result);

	return (0);
}
*/
