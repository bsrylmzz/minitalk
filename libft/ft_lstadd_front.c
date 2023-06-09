/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:51:22 by buyilmaz          #+#    #+#             */
/*   Updated: 2022/10/21 23:51:22 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*int main()
{
	t_list	*s;
	t_list	*a;
	t_list	*result;

	s = malloc(sizeof(t_list));
	s -> content = "makarna";
	s ->next = NULL;
	a = malloc(sizeof(t_list));
	a -> content = "okul";
	a -> next = NULL;
	s->next = a;
	//ft_lstadd_front(&s, a);
	//printf("%s\n", s->content);
	//printf(" %s\n", s->next->content);
	//printf("%s\n", a ->content);
	result = ft_lstadd_front(&s, a);
	printf("%s", result->content);
	//printf("%s\n", s->content);
	//printf("%s\n", s->next->content);
	//printf(" %s\n", s->next->next->content);
	//printf("%s", a ->content);
}*/
