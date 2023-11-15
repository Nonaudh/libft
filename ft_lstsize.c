/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:43:45 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/15 18:08:10 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>

int main ()
{
	int nb = 420;
        int nb2 = 42;
        t_list *result;
        t_list *new;
        result = ft_lstnew(&nb);
        new = ft_lstnew(&nb2);
        printf("%d\n", (*((int *)(result->content))));

        ft_lstadd_front(&result, new);
        printf("%d\n", (*((int *)(result->content))));
	
	printf("%d\n", ft_lstsize(result));
}
*/
