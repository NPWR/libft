/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:17:47 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/24 13:26:31 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	n;

	n = 0;
	while (*s == c)
		++s;
	while (*s)
	{
		while (*s && *s != c)
			++s;
		while (*s && *s == c)
			++s;
		++n;
	}
	return (n);
}

static int	wordlen(const char *s, char c)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr && *ptr != c)
		++ptr;
	return ((int)(ptr - s));
}

char		**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		word;

	if (!(tab = malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	word = 0;
	while (*s && *s == c)
		++s;
	while (*s)
	{
		if (!(tab[word] = ft_strsub(s, 0, wordlen(s, c))))
			return (NULL);
		s += wordlen(s, c);
		while (*s && *s == c)
			++s;
		++word;
	}
	tab[word] = NULL;
	return (tab);
}
