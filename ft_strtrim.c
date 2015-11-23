/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:56:12 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:56:13 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_blank(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char	*new;
	char	*ptr;

	new = ft_strdup(s);
	while (is_blank(*new) && *new)
		new++;
	ptr = new;
	while (*ptr)
		ptr++;
	while (is_blank(*(--ptr)) && ptr != new)
		*ptr = '\0';
	return (new);
}
