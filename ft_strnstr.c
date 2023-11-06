/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:26:10 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/06 18:21:09 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (big == 0 && l == 0)
		return (0);
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < l)
	{
		while (big[i] != little[0] && i < l)
		{
			i++;
			if (big[i] == '\0')
				return (0);
		}
		while (big[i] == little[y] && i < l)
		{
			i++;
			y++;
			if (little[y] == '\0')
				return ((char *)big + i - y);
		}
		y = 0;
	}
	return (0);
}
