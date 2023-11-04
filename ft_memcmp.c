/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:09:31 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/02 16:25:17 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*tab1;
	const unsigned char	*tab2;

	i = 0;
	tab1 = (const unsigned char *) s1;
	tab2 = (const unsigned char *) s2;
	while (tab1[i] == tab2[i] && i < n)
		i++;

	if (i < n)
	return (tab1[i] - tab2[i]);

	return 0;
}