/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:53:11 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:53:13 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned int	i;
	unsigned char	buf[n];

	i = 0;
	if (dst == NULL || src == NULL)
		return (dst);
	while (i < n)
	{
		buf[i] = ((unsigned char *)(src))[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)(dst))[i] = buf[i];
		i++;
	}
	return (dst);
}
