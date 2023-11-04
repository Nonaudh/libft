/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:25:01 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/03 16:14:33 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;

	src = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*(src + i) == (const unsigned char)c)
			return ((void *)(src + i));
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int main ()
{
	char *src = "Ceci est un test";
	int size = 10;

	printf("%s\n", (char *)ft_memchr(src, 't', size));
	printf("%s\n", (char *)memchr(src, 't', size));
}
*/
