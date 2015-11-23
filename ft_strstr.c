/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:56:07 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:56:08 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	str_is_equal(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (!*s2)
		return (1);
	return (0);
}

char		*ft_strstr(const char *src, const char *to_find)
{
	if (!*to_find)
		return ((char *)src);
	while (*src)
	{
		if (str_is_equal(src, to_find))
			return ((char *)src);
		src++;
	}
	return (NULL);
}
