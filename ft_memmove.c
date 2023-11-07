/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:02:39 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/07 16:04:19 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*ddest;
	unsigned const char	*ssrc;

	ddest = dest;
	ssrc = src;
	ssrc++;
	i = n;
	i++;
	return (ddest);
}
/*
int main ()
{
	char tab[50] = "Ceci est un test";
	char tab1[50];
	ft_memmove(tab1, tab, 10);
}
*/
