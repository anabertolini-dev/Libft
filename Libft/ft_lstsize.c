/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:56:26 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 14:46:23 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*element;
	t_list	*new_element;

	printf("count the number of elements in a linked list: ");

	// expected output: 2
	element = ft_lstnew("Porto");
	new_element = ft_lstnew("42");
	ft_lstadd_front(&element, new_element);
	printf("%d\n", ft_lstsize(element));
}

*/
