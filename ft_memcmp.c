/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:52:58 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 11:01:47 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	if (*((unsigned char *)(s1)) != *((unsigned char *)(s2)))
		return (*((unsigned char *)s1) - *((unsigned char *)s2));
	return (ft_memcmp((unsigned char *)(s1) + 1,
				(unsigned char *)(s2) + 1, n - 1));
}
