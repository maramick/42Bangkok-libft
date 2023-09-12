/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:49:13 by pvudthic          #+#    #+#             */
/*   Updated: 2023/09/11 18:15:11 by maramick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	while (s[i] != ((char)c))
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[10] = "Phanuwat";

// 	printf("%s", ft_strchr(s, '\0'));
// 	//printf("%s", ft_strchr(s, 't' + 256));
// }
