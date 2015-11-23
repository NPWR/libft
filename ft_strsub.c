/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:56:09 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:56:11 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	ft_strncpy(new, s + start, len);
	return (new);
}
