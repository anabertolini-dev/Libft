/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:31:14 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 17:38:58 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*element;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		element = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = element;
	}
}
/*
static void	del(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list	*element;
	t_list	*new_element;

	printf("delete and free all elements of a linked list:\n\n");

	element = ft_lstnew(ft_strdup("Porto"));
	new_element = ft_lstnew(ft_strdup("42"));
	ft_lstadd_front(&element, new_element);

	// expected output: 2
	printf("list size before clearing: %u\n", ft_lstsize(element));

	ft_lstclear(&element, del);

	// expected output: 0
	printf("list size after clearing: %u\n", ft_lstsize(element));

	return (0);
}
*/
