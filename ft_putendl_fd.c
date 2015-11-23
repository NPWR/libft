/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 10:53:28 by ebitsch           #+#    #+#             */
/*   Updated: 2015/11/23 11:02:14 by ebitsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(const char *s, int fd)
{
	int		i;
	char	endl;

	endl = '\n';
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, &endl, 1);
}
