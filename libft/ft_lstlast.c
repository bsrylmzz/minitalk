/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:51:28 by buyilmaz          #+#    #+#             */
/*   Updated: 2022/10/21 23:51:28 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/*int main()
{
	t_list *s;
	t_list *a;
	t_list *list3;
	t_list *result;
	s = malloc(sizeof(t_list));
	s -> content = "makarna";
	s ->next = NULL;
	a = malloc(sizeof(t_list));
	a -> content = "okul";
	a -> next = NULL;
	s->next = a;
	list3 = malloc(sizeof(t_list));
	list3 ->content = "gebze";
	list3 -> next = NULL;
	a -> next = list3;
	result = ft_lstlast(s);
	printf("%s", result -> content);
}*/