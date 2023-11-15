/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:09:43 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/15 18:57:46 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
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
        printf("%d\n", (*((int *)(result->content))));
	new = ft_lstnew(&nb2);
        ft_lstadd_front(&result, new);
	result = result->next;
        printf("%d\n", (*((int *)(result->content))));

        
        printf("%d\n", (*(int *)ft_lstlast(result)->content));
}
*/
