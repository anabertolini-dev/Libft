/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:15:32 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 14:50:33 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*current;

	lst = ft_lstnew("42");

	printf("add new elements to the end of a linked list:\n\n");

	ft_lstadd_back(&lst, ft_lstnew("Porto"));
	ft_lstadd_back(&lst, ft_lstnew("Libft"));

	current = lst;
	while (current != NULL)
	{
		// Expected output: 42
		// Expected output: Porto
		// Expected output: Libft
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	while (lst != NULL)
	{
		current = lst->next;
		free(lst);
		lst = current;
	}
	return (0);
}
*/
