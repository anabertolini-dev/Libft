/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:51:31 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 11:25:19 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;
	printf("remove characters from the beginning and end of a string:\n\n");

	// expected output: hello
	result = ft_strtrim("fthelloft", "ft");
	printf("trimming ft: %s\n", result);
	free(result);

	// expected output: 42
	result = ft_strtrim("bonjour42bonjour", "bonjour");
	printf("trimming bonjour: %s\n", result);
	free(result);

	// expected output: bye
	result = ft_strtrim("abcbyeabcc", "abc");
	printf("trimming abc: %s\n", result);
	free(result);

	return (0);
}
*/
