/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:02:18 by buyilmaz          #+#    #+#             */
/*   Updated: 2022/11/26 15:46:36 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_new;
	unsigned char	*src_new;

	dst_new = (unsigned char *)dst;
	src_new = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len-- > 0)
		{
			dst_new[len] = src_new[len];
		}
	}
	return (dst);
}

/*int	main()
{
	char	dst[10] = "abcdefghki";
	char	src[10] = "axyu";
	size_t	len = 3;
	ft_memmove(dst,src,len);
	printf("%s|%s|%zu", dst,src,len);
	return (0);
}*/
