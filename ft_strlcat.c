/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:12:03 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/03 15:31:16 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	i;
	size_t	j;

	x = ft_strlen(src);
	y = ft_strlen(dest);
	i = 0;
	j = y;
	while (i < size && dest[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = 0;
	return (x + y);
}

