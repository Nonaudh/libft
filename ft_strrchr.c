/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:50:34 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/06 19:32:53 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = 0;
	if (src[i] == '\0')
		return (0);
	while (src[i])
		i++;
	while (i >= 0)
	{
		if ((char)src[i] == (char)c)
			return ((char *)src + i);
		i--;
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>

int main ()
{
	char *src = "test\0test";
	printf("%s\n", strrchr(src, '\0'));
	printf("%s", ft_strrchr(src, '\0'));
}
*/
