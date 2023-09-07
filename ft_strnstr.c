/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvudthic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:54:55 by pvudthic          #+#    #+#             */
/*   Updated: 2023/09/05 14:00:45 by pvudthic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	next;
	size_t	max;

	next = 0;
	max = len;
	if (*needle == 0)
		return ((char *)(haystack));
	while (haystack[next] != '\0' && len > 0)
	{
		j = 0;
		i = next;
		if (haystack[i] == needle[j])
		{
			while (haystack[i++] == needle[j++] && i <= max)
			{
				if (needle[j] == '\0')
					return ((char *)(haystack + next));
			}
		}
		next++;
		len--;
	}
	return (NULL);
}
//Notes
//We should i <= max for stop
//if last haystack == last needle it will overflow the memmory
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";
// 	char *ptr;
// 	ptr = ft_strnstr(largestring, smallstring, 4);
// 	printf("%s\n", ptr);
// 	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
// 	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "", 10));
// 	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
// 	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
// 	printf("%s\n", ft_strnstr("AAAAA", "AAAAA", 5));
// 	printf("%s", strnstr("AAAAA", "AAAAA", 5));
// 	return (0);
// }
