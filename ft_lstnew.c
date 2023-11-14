/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahuge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:33:33 by ahuge             #+#    #+#             */
/*   Updated: 2023/11/14 18:06:46 by ahuge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;
	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);

	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
#include <stdio.h>

int main ()
{
	int *test;
	int nb = 420;
	test = &nb;
	t_list *result;
	result = ft_lstnew(test);
	printf("%d", (*((int *)(result->content))));
}
*/
