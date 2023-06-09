/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:02:03 by buyilmaz          #+#    #+#             */
/*   Updated: 2022/11/27 14:54:46 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;

	if (!n || src == dest)
		return (dest);
	a = 0;
	while (a < n)
	{
		((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
		a++;
	}
	return (dest);
}

/*int	main()
{
	char dest[] = "busra";
	char src[] = "yilmaz";
	ft_memcpy(dest, src, 3);
	printf("%s | %s", dest,src);
}*/