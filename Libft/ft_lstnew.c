/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:56:06 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 14:59:47 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*ptr;

	printf("create a new list element with content and a null next pointer:\n");

	// expected output: continente
	ptr = ft_lstnew("continente");
	printf("%s\n", (char *)ptr->content);

	// expected output: (null)
	printf("%p", (char *)ptr->next);
}
*/
