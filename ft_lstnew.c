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
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
*/
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

#include <stdio.h>

int main ()
{
	int nb = 420;
	t_list *result;
	result = ft_lstnew(&nb);
	printf("%d", (*((int *)(result->content))));
}

