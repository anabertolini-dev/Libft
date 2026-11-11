/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:13:55 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/15 14:59:15 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*element;
	t_list	*n1_element;
	t_list	*n2_element;

	printf("the last node of the list: ");

	// expected output: Porto
	element = ft_lstnew("Porto");
	n1_element = ft_lstnew("42");
	n2_element = ft_lstnew("Portugal");
	ft_lstadd_front(&element, n1_element);
	ft_lstadd_front(&n1_element, n2_element);
	printf("%s\n", (char *)ft_lstlast(n2_element)->content);
}
*/
