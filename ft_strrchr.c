/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:50:34 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/03 16:00:44 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
		return (0);
	while (src[i] != '\0')
		i++;
	while (src[i] != c && i >= 0)
		i--;
	if (i == 0)
	{
		if (src[i] == c)
			return ((char *)src);
		else
			return (0);
	}
	else
		return ((char *)src + i);
}
/*
#include<stdio.h>
#include<string.h>

int main ()
{
	char *src = "\0";
	//printf("%s\n", strrchr(src, 'a'));
	printf("%s", ft_strrchr(src, 'a'));
}
*/
