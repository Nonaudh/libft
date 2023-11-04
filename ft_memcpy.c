/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:33:08 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/03 16:08:44 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*sdest;
	const unsigned char	*ssrc;
	size_t				i;

	i = 0;
	sdest = dest;
	ssrc = src;
	while (i < n)
	{
		*(sdest + i) = *(ssrc + i);
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

int main ()
{
	char *tab;
	char *tab1;
	char *tab2;
	printf("%s\n", (char *)ft_memcpy(((void*)0), ((void*)0), 3));
	printf("%s\n", (char *)memcpy(((void*)0), ((void*)0), 3));
}
*/
