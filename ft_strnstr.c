/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:55:48 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:55:50 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (i < len && s1[i])
	{
		j = 0;
		while (i + j < len && s1[i + j] && s2[j] && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
