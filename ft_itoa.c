/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:52:26 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 11:00:16 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	repr_size(int n)
{
	int	size;

	size = n < 0 ? 2 : 1;
	while ((n /= 10) != 0)
		++size;
	return (size);
}

static int	first_digit(int n)
{
	while (n > 9 || n < -9)
		n /= 10;
	return (n < 0 ? -n : n);
}

static int	magnitude(int n)
{
	int	m;

	m = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		m *= 10;
	}
	return (m);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		pos;
	int		size;

	size = repr_size(n);
	s = ft_strnew(size + 1);
	if (s == NULL)
		return (NULL);
	pos = 0;
	if (n < 0)
	{
		*s = '-';
		pos++;
	}
	while (pos < size)
	{
		s[pos++] = first_digit(n) + '0';
		n -= first_digit(n) * magnitude(n) * n < 0 ? -1 : 1;
	}
	return (s);
}
