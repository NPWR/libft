/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:53:01 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:53:04 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (dst);
	while (i < n)
	{
		((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
		i++;
	}
	return (dst);
}
