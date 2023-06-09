/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:52:51 by buyilmaz          #+#    #+#             */
/*   Updated: 2022/10/29 16:34:18 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (((unsigned char *)s)[a] == (unsigned char)c)
			return ((void *)(s + a));
		a++;
	}
	return (0);
}

/*int	main()
{
	char s[] = "kirkikikocaeli";

	printf("%s", ft_memchr(s, 'r', 5));
	return (0);
}*/
