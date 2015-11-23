/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:53:14 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:53:16 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	v;
	unsigned int	i;

	i = 0;
	v = (unsigned char)value;
	if (ptr == NULL)
		return (NULL);
	while (i < num)
		((unsigned char *)(ptr))[i++] = v;
	return (ptr);
}
