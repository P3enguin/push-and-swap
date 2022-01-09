/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 08:25:03 by ybensell          #+#    #+#             */
/*   Updated: 2022/01/09 08:16:38 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "checker.h"

void	swap_a(t_list *a)
{
	if (ft_lstsize(a) <= 1)
		return ;
	swap(&a->content, &a->next->content);
	write(1, "sa\n", 3);
}