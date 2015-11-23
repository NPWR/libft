/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:52:54 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:52:57 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memchr(void *ptr, int value, size_t num)
{
	unsigned int i;

	i = 0;
	if (ptr == NULL)
		return (ptr);
	while (i < (unsigned int)num)
	{
		if ((unsigned char)(value) == ((unsigned char*)(ptr))[i])
			return ((void*)(((unsigned char*)(ptr)) + i));
		i++;
	}
	return (NULL);
}
