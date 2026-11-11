/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:53:27 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 15:32:11 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	change_char(unsigned int i, char c)
{
	if (i == 2)
		return ('4');
	if (i == 3)
		return ('2');
	return (c);
}
#include <stdio.h>

int	main(void)
{
	char	*str;

	printf("apply a function to each character of a string:\n\n");

	// expected output: bo42ia
	str = ft_strmapi("bomdia", change_char);
	printf("applying a function to bomdia: %s\n", str);
	free(str);

	// expected output: 9429
	str = ft_strmapi("9999", change_char);
	printf("applying a function to 9999: %s\n", str);

	return (0);
}
*/
