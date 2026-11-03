/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:18:07 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/05 17:23:40 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	// expected output: -456
	printf("conversion of \"-456\": %d\n", ft_atoi("-456"));

	// expected output: 789
	printf("conversion of \"+789\": %d\n", ft_atoi("+789"));

	// expected output: 42
	printf("conversion of \"   42\": %d\n", ft_atoi("   42"));

	// expected output: -42
	printf("conversion of \"   -42\": %d\n", ft_atoi("   -42"));

	// expected output: 123
	printf("conversion of \"123abc\": %d\n", ft_atoi("123abc"));

	// expected output: 0
	printf("conversion of \"abc123\": %d\n", ft_atoi("abc123"));

	return (0);
}
*/