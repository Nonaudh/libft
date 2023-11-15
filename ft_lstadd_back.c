/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:59:13 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/15 19:48:06 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*
#include <stdio.h>

int main ()
{
        int nb = 420;
        int nb2 = 42;
	int nb3 = 96;
        t_list *result;
        t_list *new;
	t_list *back;

        result = ft_lstnew(&nb);
        printf("%d\n", (*((int *)(result->content))));
        new = ft_lstnew(&nb2);
	back = ft_lstnew(&nb3);
        ft_lstadd_front(&result, new);
        printf("%d\n", (*((int *)(result->content))));
        printf("%d\n", (*(int *)ft_lstlast(result)->content));
	ft_lstadd_back(&result, back);
	printf("%d\n", (*(int *)ft_lstlast(result)->content));
	
}
*/
