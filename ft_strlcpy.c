/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:36:33 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/08 20:32:38 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	//if (!dest || !src)
	//	return (0);
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int main ()
{
	char dest[100];
	char *src = "Ceci est un test";
	ft_strlcpy(((void*)0), ((void*)0), 10);
	//printf("%d\n", (int)ft_strlcpy(((void)*0), ((void)*0), 10));
	printf("%s", dest);
}
*/
