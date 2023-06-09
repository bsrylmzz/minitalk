/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:52:41 by buyilmaz          #+#    #+#             */
/*   Updated: 2022/10/21 23:52:41 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/*int main()
{
	t_list *s;
	t_list *a;
	t_list *b;

	s = malloc(sizeof(t_list));
	s ->content = "makarna";
	s ->next = NULL;
	a = malloc(sizeof(t_list));
	a ->content = "okul";
	a ->next = NULL;
	s -> next= a;
	b = malloc(sizeof(t_list));
	b ->content = "yeter";
	b -> next =NULL;
	a ->next = b;
	printf("%d", ft_lstsize(s));
}*/