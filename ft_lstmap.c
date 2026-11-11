/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 17:40:49 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/16 23:25:49 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_element;
	void	*content;

	if (f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		new_element = ft_lstnew(content);
		if (new_element == NULL)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_element);
		lst = lst->next;
	}
	return (new_lst);
}
/*
static void	*f(void *content)
{
	char	*ct;
	size_t	i;

	ct = ft_strdup((char *)content);
	if (ct == NULL)
		return (NULL);
	i = 0;
	while (ct[i] != '\0')
	{
		if (ct[i] >= 'a' && ct[i] <= 'z')
			ct[i] = ct[i] - 32;
		else if (ct[i] >= 'A' && ct[i] <= 'Z')
			ct[i] = ct[i] + 32;
		i++;
	}
	return ((void *)ct);
}

static void	del(void *content)
{
	free(content);
}

#include <stdio.h>

int	main(void)
{
	t_list	*element;
	t_list	*second_element;
	t_list	*mapped;

	printf("apply a function to the content of ");
	printf("each element in a linked list:\n\n");

	element = ft_lstnew(ft_strdup("porto"));
	if (element == NULL)
		return (1);
	second_element = ft_lstnew(ft_strdup("42"));
	if (second_element == NULL)
	{
		ft_lstclear(&element, del);
		return (1);
	}
	ft_lstadd_front(&element, second_element);

	mapped = ft_lstmap(element, f, del);
	if (mapped == NULL)
	{
		ft_lstclear(&element, del);
		return (1);
	}

	// expected output: 42
	printf("%s\n", (char *)mapped->content);

	// expected output: PORTO
	printf("%s\n", (char *)mapped->next->content);

	ft_lstclear(&mapped, del);
	ft_lstclear(&element, del);
	return (0);
}
*/
