/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:21:13 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/07 19:00:20 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;
	size_t	j;
	size_t	s;

	i = 0;
	s = 1;
	while (s1[i] && s)
	{
		y = 1;
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				y = 0;
			j++;
		}
		if (y == 1)
			s = 0;
		i++;
	}
	return (i - 1);
}

int	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;
	size_t	j;
	size_t	s;

	i = ft_strlen(s1) - 1;
	s = 1;
	while (i != 0 && s)
	{
		y = 1;
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				y = 0;
			j++;
		}
		if (y == 1)
			s = 0;
		i--;
	}
	return (i + 2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*tab;

	if (s1 == NULL)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (end <= start)
	{
		tab = "";
		return (tab);
	}
	tab = malloc(sizeof(char) * (end - start + 1));
	tab = ft_substr(s1, start, (end - start));
	return (tab);
}
/*
#include <stdio.h>

int main ()
{
	char *tab = "";
	char *set = " \n\t";
	printf("%s", ft_strtrim(tab, set));
}
*/
