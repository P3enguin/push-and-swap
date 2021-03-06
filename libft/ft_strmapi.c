/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:46:30 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/09 09:58:13 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	if (s == 0 || f == 0)
		return (NULL);
	p = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (p == 0)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(p + i) = f(i,*(s + i));
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
