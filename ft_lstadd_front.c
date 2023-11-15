/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:11:38 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/15 18:49:33 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
	printf("%d\n", (*(int *)(result->content)));
}
*/
