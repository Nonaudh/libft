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


/*
#include<stdio.h>
#include<stdlib.h>

int	count_word(char const *s, char c)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	if (s[i] == c)
		i++;

	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;

		while (s[i] == c)
			i++;
		x++;
	}
	if (s[i -1] != c)
		x++;
	return (x);
}

char **ft_split(char const *s, char c)
{
	int		x;
	int		i;
	char	**tab;

	i = 0;
	x = count_word(s, c);
	tab = malloc(sizeof(char*) * (x + 1));
	
	while (s[i])
	{
	
	}
}


int main()
{
	char *tab = ",  Ceci, est , un, test";
	char c = ',';

	printf("%d", count_word(tab, c));
}
*/
