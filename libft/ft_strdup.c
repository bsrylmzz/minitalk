/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buyilmaz <buyilmaz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:02:59 by buyilmaz          #+#    #+#             */
/*   Updated: 2022/10/22 00:02:59 by buyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*twin;

	twin = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!(twin))
		return (0);
	i = 0;
	while (str[i])
	{
		twin[i] = str[i];
		i++;
	}
	twin[i] = '\0';
	return (twin);
}

/*int main()
{
	char str[] = "busra";
	ft_strdup(str);
	printf("%s",str);
}*/