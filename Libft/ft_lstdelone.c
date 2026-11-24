/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 14:52:18 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 15:29:59 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
static void	del(void *content)
{
	free(content);
}
#include <stdio.h>
int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = ft_lstnew(ft_strdup("42"));
	second = ft_lstnew(ft_strdup("Porto"));
	third = ft_lstnew(ft_strdup("Libft"));

	first->next = second;
	second->next = third;

	printf("delete only one node from a linked list:\n\n");

	// expected output: Porto
	printf("content to delete: %s\n", (char *)second->content);

	first->next = third;
	ft_lstdelone(second, del);

	// expected output: 42
	printf("first node: %s\n", (char *)first->content);

	// expected output: Libft
	printf("third node: %s\n", (char *)third->content);

	free(first->content);
	free(first);
	free(third->content);
	free(third);

	return (0);
}
*/
