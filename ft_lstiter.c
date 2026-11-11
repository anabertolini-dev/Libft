/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 16:50:27 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 17:48:05 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
static void	f(void *content)
{
	char	*ct;
	size_t	i;

	ct = (char *)content;
	i = 0;

	while (ct[i] != '\0')
	{
		if (ct[i] >= 'a' && ct[i] <= 'z')
			ct[i] = ct[i] - 32;
		else
		{
			if (ct[i] >= 'A' && ct[i] <= 'Z')
			ct[i] = ct[i] + 32;
		}
		i++;
	}
}
#include <stdio.h>

int	main(void)
{
	t_list	*element;
	t_list	*second_element;

	printf("apply a function to the content of");
	printf("each element in a linked list:\n");

	element = ft_lstnew(ft_strdup("porto"));
	second_element = ft_lstnew(ft_strdup("42"));
	ft_lstadd_front(&element, second_element);

	// expected output: 42
	ft_lstiter(element, f);
	printf("%s\n", (char *)element->content);

	// expected output: PORTO
	printf("%s\n", (char *)element->next->content);

	ft_lstclear(&element, free);
	return (0);
}
*/
