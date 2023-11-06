/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:58:43 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/06 20:57:35 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	n_len(int n, int *z)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		*z = 1;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (*z == 1)
		i++;
	return (i);
}

int	ind_n(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	int		i;
	unsigned int		x;
	int		z;
	char	*tab;

	z = 0;
	
	i = n_len(n, &z);
	tab = malloc(sizeof(char) * (i + 1));
	if (tab == NULL)
		return (NULL);
	tab[i] = 0;
	i--;
	while (i >= 0 && tab[i] != '-')
	{
		tab[i] = ind_n(n % 10) + '0';
		n = n / 10;
		i--;
		if (z == 1 && i == 0)
			tab[i] = '-';
	}
	return (tab);
}
#include <stdio.h>

int main ()
{
	printf("%s\n", ft_itoa(-42069));
}