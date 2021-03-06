/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:40:09 by ybensell          #+#    #+#             */
/*   Updated: 2022/01/07 16:05:57 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*n;

	if (*lst == 0)
		return ;
	while (*lst != NULL)
	{
		n = (*lst)->next;
		free(*lst);
		*lst = n;
	}
	*lst = NULL;
}
