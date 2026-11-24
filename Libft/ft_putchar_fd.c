/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:20:50 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 22:07:19 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
int	main(void)
{
	// expected output: A
	printf("writing a char: ");
	ft_putchar_fd('A', 1);
	printf("\n");

	// expected output: 4
	printf("writing a digit: ");
	ft_putchar_fd('4', 1);
	printf("\n");

	// expected output: error!
	printf("writing an error message: ");
	ft_putchar_fd('e', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('!', 2);
	printf("\n");

	return (0);
}
*/
