/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:52:32 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:52:48 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;

	zone = (void*)malloc(sizeof(unsigned char) * size);
	if (zone == NULL)
		return (NULL);
	ft_memset(zone, 0, size);
	return (zone);
}
