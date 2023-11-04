/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:34:30 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/02 17:49:22 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*tab;
	int		x;
	int		i;

	i = 0;
	x = ft_strlen(s);
	tab = malloc(sizeof(char) * (x + 1));
	if (tab == NULL)
		return (NULL);
	while (i < x)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}
