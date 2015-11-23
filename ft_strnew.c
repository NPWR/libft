/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:55:44 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:55:46 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*zone;

	zone = (char*)malloc(sizeof(char) * size);
	if (zone == NULL)
		return (NULL);
	ft_memset((void*)zone, '\0', size);
	return (zone);
}
