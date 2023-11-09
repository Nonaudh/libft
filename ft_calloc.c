/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:23:23 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/08 21:04:32 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	long long nm_size;

	nm_size = nmemb * size;
	if (nm_size < 0 || ((long long)nmemb < 0 && (long long)size))
		return (NULL);
	tab = malloc(nm_size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nm_size);
	return (tab);
}
/*
int main ()
{
	char *tab = ft_calloc(-5, -5);
	int i = 0;

	while (i < 10)
	{
		if (tab[i] != 0)
			printf("%d", tab[i]);
		i++;
	}

}
*/
