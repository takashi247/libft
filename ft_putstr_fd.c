/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnishina <tnishina@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:43:29 by tnishina          #+#    #+#             */
/*   Updated: 2022/06/08 20:18:30 by tnishina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	ft_putstr_fd(char *s, int fd)
{
	size_t	len_s;

	if (s && 0 <= fd)
	{
		len_s = ft_strlen(s);
		if (len_s <= INT_MAX)
			write(fd, s, len_s);
		else
		{
			while (INT_MAX < len_s)
			{
				write(fd, s, INT_MAX);
				len_s -= (size_t)INT_MAX;
				s += INT_MAX;
			}
			write(fd, s, len_s);
		}
	}
}
