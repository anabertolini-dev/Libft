/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:52:58 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/11 22:07:22 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
#include <stdio.h>
int	main(void)
{
	// expected output: hello
	printf("writing 'hello':\n");
	ft_putendl_fd("hello", 1);

	// expected output: 42 Porto
	printf("writing '42 Porto':\n");
	ft_putendl_fd("42 Porto", 1);

	// expected output: error!
	printf("writing 'error!' as an error message:\n");
	ft_putendl_fd("hello", 2);

	return (0);
}
*/
