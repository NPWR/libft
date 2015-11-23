/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:55:04 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:55:06 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}
