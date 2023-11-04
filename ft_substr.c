/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:05:24 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/01 12:56:57 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

unsigned int	ft_malloc_len(size_t len, size_t x);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	x;
	char	*tab;

	i = 0;
	x = 0;
	while (s[i] != (const char)start)
		i++;
	while (s[i + x])
		x++;
	len = ft_malloc_len(len, x);
	tab = malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	x = 0;
	while (x < len)
	{
		tab[x] = s[i];
		i++;
		x++;
	}
	tab[x] = 0;
	return (tab);
}

unsigned int	ft_malloc_len(size_t len, size_t x)
{
	if (x < len)
		return (x);
	else
		return (len);
}
