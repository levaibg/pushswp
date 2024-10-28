/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <lloginov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:57:09 by lloginov          #+#    #+#             */
/*   Updated: 2024/10/27 23:58:31 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split, size_t i)
{
	while (i > 0)
	{
		free(split[i - 1]);
		i--;
	}
	free(split);
}

size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

const char	*next_word(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

size_t	word_length(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	w_len;
	size_t	word_count;
	char	**split;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s && i < word_count)
	{
		s = next_word(s, c);
		w_len = word_length(s, c);
		split[i] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!split[i])
			return (free_split(split, i), NULL);
		ft_strlcpy(split[i], s, w_len + 1);
		s += w_len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
