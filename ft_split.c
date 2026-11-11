/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:00:59 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/11/12 15:35:36 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == sep && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != sep && str[i] != '\0')
			i++;
	}
	return (count);
}

static void	free_words(char **ptr_words, size_t j)
{
	while (j > 0)
	{
		j--;
		free(ptr_words[j]);
	}
	free(ptr_words);
}

static size_t	inizialize_words(char **ptr_words, const char *str, char sep)
{
	size_t	i;
	size_t	start;
	size_t	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == sep && str[i] != '\0')
			i++;
		start = i;
		while (str[i] != sep && str[i] != '\0')
			i++;
		if (i > start)
		{
			ptr_words[j] = ft_substr(str, start, i - start);
			if (ptr_words[j] == NULL)
			{
				free_words(ptr_words, j);
				return (0);
			}
			j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**ptr_words;
	int		result;

	words = count_words(s, c);
	ptr_words = malloc((words + 1) * sizeof(char *));
	if (ptr_words == NULL)
		return (NULL);
	result = inizialize_words(ptr_words, s, c);
	if (result == 0)
		return (NULL);
	ptr_words[words] = NULL;
	return (ptr_words);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**string;
	size_t	i;

	printf("split a string into an array of substrings:\n\n");

	// expected output: hello | 42 | hello | world
	string = ft_split("hello,42,hello,world", ',');
	i = 0;
	while (string[i] != NULL)
	{
		printf("word %zu: %s\n", i, string[i]);
		i++;
	}
	free_words(string, i);
	return (0);
}
*/
