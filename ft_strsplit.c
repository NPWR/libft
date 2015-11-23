/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:56:02 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 11:09:56 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
		n++;
	}
	return (n);
}

static int	wordlen(char *s, char c)
{
	char	*ptr;

	ptr = s;
	while (*ptr && *ptr != c)
		ptr++;
	return ((int)(ptr - s));
}

static char	*clean(const char *s, char c)
{
	char	*new;

	new = (char*)s;
	while (*new == c && *new)
		new++;
	return (new);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**tab;
	char	*copy;
	int		word;

	copy = clean(s, c);
	tab = (char**)malloc(sizeof(char*) * (count_words(copy, c) + 1));
	if (tab == NULL) return (NULL);
	word = 0;
	while (*copy)
	{
		tab[word] = (char*)malloc(sizeof(char) * (wordlen(copy, c) + 1));
		if (tab[word] == NULL) return (NULL);
		ft_strncpy(tab[word], copy, wordlen(copy, c));
		tab[word][wordlen(copy, c)] = '\0';
		copy += *copy ? wordlen(copy, c) : 0;
		while (*copy && *copy == c)
			copy++;
		word++;
	}
	tab[word] = (char*)malloc(sizeof(char));
	if (tab[word] == NULL) return (NULL);
	tab[word][0] = '\0';
	return (tab);
}
