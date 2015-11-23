/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:53:32 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 10:53:37 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	abs(int n)
{
	return (n < 0 ? -n : n);
}

void		ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (abs(n / 10) >= 1)
	{
		ft_putnbr(abs(n / 10));
		ft_putnbr(abs(n % 10));
	}
	else
		ft_putchar(abs(n) + '0');
}
