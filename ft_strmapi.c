/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:10:17 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/07 15:43:45 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tab;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tab = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
/*
char	upper(unsigned int i, char tab)
{
	(void)i;
	if (tab > 96 && tab < 123)
		return (tab - 32);

	else
		return (tab);
}

int main ()
{
	char *tab = "Ceci est un test";
	char *tab1 = ft_strmapi(tab, upper);
	printf("%s", tab1);	
}
*/
