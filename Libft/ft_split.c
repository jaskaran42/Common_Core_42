/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:54:13 by jmehmy            #+#    #+#             */
/*   Updated: 2024/11/14 20:18:16 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char delimiter)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == delimiter)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != delimiter)
			i++;
	}
	return (count);
}

static int	find_next_word(const char *str, char delimiter, int *start,
		int *end)
{
	int	i;

	i = *end;
	while (str[i] != '\0' && str[i] == delimiter)
		i++;
	*start = i;
	while (str[i] != '\0' && str[i] != delimiter)
		i++;
	*end = i;
	return (*end > *start);
}

static void	copy_words(char *tab_word, const char *str, int start, int end)
{
	int	j;

	j = 0;
	while (start < end)
	{
		tab_word[j] = str[start];
		j++;
		start++;
	}
	tab_word[j] = '\0';
}

static void	ft_allocate(char **tab, const char *str, char delimiter)
{
	int	word;
	int	start;
	int	end;

	word = 0;
	start = 0;
	end = 0;
	while (find_next_word(str, delimiter, &start, &end))
	{
		tab[word] = malloc((end - start + 1) * sizeof(char));
		if (tab[word] != NULL)
		{
			copy_words(tab[word], str, start, end);
			word++;
		}
	}
	tab[word] = NULL;
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		size;
	char	**new_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	size = count_words(s, c);
	new_s = malloc((size + 1) * sizeof(char *));
	if (new_s == NULL)
		return (NULL);
	ft_allocate(new_s, s, c);
	while (i < size)
	{
		if (new_s[i] == NULL)
		{
			free(new_s);
			return (NULL);
		}
		i++;
	}
	return (new_s);
}
