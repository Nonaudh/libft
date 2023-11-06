/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:12:08 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/06 19:33:11 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
	while (src[i] != c)
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
				return;
			ft_tabcpy(tab[j], &s[i], c);
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

	x = count_word(s, c);
	tab = malloc(sizeof(char *) * (x + 1));
	if (tab == 0)
		return (0);
	ft_tabset(tab, s, c);
	return (tab);
}

/*
int main()
{
	char *tab = "Ceci, est, un, test";
	char c = ',';

	ft_split(tab, c);
}
*/
