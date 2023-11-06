/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:05:24 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/06 20:32:55 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;

	i = 0;
	if (ft_strlen(s) <= (int)start)
		len = 0;
	tab = malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return(NULL);
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>

int main ()
{
	char *tab = "test";
	printf("%s", ft_substr(tab, 10, 10));
}
*/
