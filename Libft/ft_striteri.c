/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:29:45 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 15:55:22 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	change_char(unsigned int i, char *c)
{
	if (i == 2)
		*c = '4';
	if (i == 3)
		*c = '2';
}
#include <stdio.h>

int	main(void)
{
	printf("apply a function to each character of a string:\n\n");

	char str[] = "bomdia";
	// expected output: bo42ia
	ft_striteri(str, change_char);
	printf("applying a function to bomdia: %s\n", str);

	// expected output: 9429
	char str1[] = "9999";
	ft_striteri(str1, change_char);
	printf("applying a function to 9999: %s\n", str1);

	return (0);
}
*/
