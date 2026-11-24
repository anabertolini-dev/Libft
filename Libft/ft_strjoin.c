/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:40:00 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 11:24:15 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;
	printf("join two strings into a new string:\n\n");

	// expected output: Gonçalo
	result = ft_strjoin("Gon", "çalo");
	printf("joining gon and çalo: %s\n", result);
	free(result);

	// expected output: André
	result = ft_strjoin("An", "dré");
	printf("joining an and dré: %s\n", result);
	free(result);

	// expected output: João
	result = ft_strjoin("J", "oão");
	printf("joining j and oão: %s\n", result);
	free(result);

	return (0);
}
*/
