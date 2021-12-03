/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnishina <tnishina@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:43:28 by tnishina          #+#    #+#             */
/*   Updated: 2021/12/03 18:56:11 by tnishina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_lstsize(t_list *lst)
{
	size_t	len_lst;

	if (!lst)
		return (0);
	len_lst = 0;
	while (lst)
	{
		len_lst++;
		lst = lst->next;
	}
	return (len_lst);
}
