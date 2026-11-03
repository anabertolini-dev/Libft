/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:00:59 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/07 18:47:44 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while(str[i] == sep)
			i++;
		if (str[i] == '\0')
			return (count);
		count++;
		while (str[i] != sep && str[i] != '\0')
			i++;
	}
	return (count);
}
#include <stdio.h>
int	main(void)
{
	printf("%zu",count_words("okok", ','));
}