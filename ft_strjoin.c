/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:39:12 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/02 17:42:09 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		i;
	int		z;
	char	*tab;

	i = 0;
	z = 0;
	x = ft_strlen(s1) + ft_strlen(s2);
	tab = malloc(sizeof(char) * (x + 1));
	if (tab == NULL)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[z])
	{
		tab[i] = s2[z];
		i++;
		z++;
	}
	tab[i] = 0;
	return (tab);
}
