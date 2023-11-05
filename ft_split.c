/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:12:08 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/02 13:25:16 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	count_word(char const *s, char c)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c || s[i + 1] == '\0')
			x++;

		i++;
	}
	return (x);
}


char **ft_split(char const *s, char c)
{
	int		x;
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	x = count_word(s, c);
	printf("%d\n", x);
	tab = malloc(sizeof(char*) * (x + 1));
	while (i <= x)
	{
		if (s[i] != c && s[i + 1] == c || s[i + 1] == '\0')
		{
			tab[j] = 
			x++;
		}
			
	}
	
	return (0);
}


int main()
{
	char *tab = "Ceci,est,un,test";
	char c = ',';

	ft_split(tab, c);
}

