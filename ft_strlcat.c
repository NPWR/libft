/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:54:52 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/25 00:36:16 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= n)
		return (n + src_len);
	i = dst_len;
	while (i < (n - 1) && src[i - dst_len])
	{
		dst[i] = src[i - dst_len];
		++i;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
