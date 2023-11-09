/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:12:08 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/08 18:02:25 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

int	count_word(char const *s, char c)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			x++;
		i++;
	}
	return (x);
}

void	ft_tabcpy(char *dest, char const *src, int c)
{
	int	i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_tabset(char **tab, const char *s, int c)
{
	int	i;
	int	x;
	int	j;

	i = 0;
	x = 0;
	j = 0;
	while (s[i])
	{
		x = 0;
		while (s[i + x] && s[i + x] != c)
			x++;
		if (x > 0)
		{
			tab[j] = malloc(sizeof(char) * (x + 1));
			if (tab[j] == 0)
				return ;
			ft_tabcpy(tab[j], s + i, c);
			j++;
			i = i + x;
		}
		else
			i++;
	}
	tab[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		x;
	char	**tab;

	if (!s)
		return (NULL);
	x = count_word(s, c);
	tab = malloc(sizeof(char *) * (x + 1));
	if (tab == 0)
		return (NULL);
	ft_tabset(tab, s, c);
	return (tab);
}
/*
int main()
{
	char *tab = "lorem ipsum Suspendisse";
	char c = 0;
	char **res;
	int j = 0;
	res = ft_split(tab, c);

	while (j <= count_word(tab, c))
	{
		printf("%s\n", res[j]);
		j++;
	}
}
*/
