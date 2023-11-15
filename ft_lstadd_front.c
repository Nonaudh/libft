/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:11:38 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/14 21:03:40 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	lst->content = *new;
	lst->next = lst;
}

#include <stdio.h>

int main ()
{
	int *test;
	int *test2;
	int nb = 420;
	int nb2 = 42;
	test = &nb;
	test2 = &nb2;
	t_list *result;
	result = ft_lstnew(test);
	printf("%d\n", (*((int *)(result->content))));

	ft_lstadd_front(result, test2);
	printf("%d\n", (*((int *)(result->content))));
}
