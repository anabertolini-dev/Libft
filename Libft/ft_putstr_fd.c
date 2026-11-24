/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:22:09 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 22:07:29 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	// expected output: hello pisciners
	printf("writing 'hello pisciners': ");
	ft_putstr_fd("hello pisciners", 1);
	printf("\n");

	// expected output: hello 42 alumni
	printf("writing 'hello 42 alumni': ");
	ft_putstr_fd("hello 42 alumni", 1);
	printf("\n");

	// expected output: hello bocal
	printf("writing 'hello bocal': ");
	ft_putstr_fd("", 1);
	printf("\n");

	return (0);
}
*/
