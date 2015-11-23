/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:52:50 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:52:53 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
		if (((unsigned char *)(dst))[i] == (unsigned char)(c))
			return ((unsigned char *)(dst) + i);
		i++;
	}
	return (NULL);
}
