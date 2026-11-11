/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:21:42 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 16:55:52 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*element;
	t_list	*new_element;

	printf("add a new element at the beginning of a linked list:\n\n");

	// expected output: moulinette
	element = ft_lstnew("moulinette");
	new_element = ft_lstnew("norminette");

	printf("%s\n", "before new element:");
	printf("%s\n", (char *)element->content);

	ft_lstadd_front(&element, new_element);

	// expected output: norminette
	printf("%s\n", "after new element:");
	printf("%s\n", (char *)element->content);

	// expected output: moulinette
	printf("%s", (char *)element->next->content);
}
*/
