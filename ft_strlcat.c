/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvudthic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:25:25 by pvudthic          #+#    #+#             */
/*   Updated: 2023/09/12 17:38:25 by pvudthic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	if (size == 0)
		return (0);
	dest_len = 0;
	src_len = 0;
	total_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	total_len = dest_len + src_len;
	if (dest_len >= size)
		return (total_len);
	while (src[i] != '\0' && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
// int	main(void)
// {
// 	char dest[10000] = "";
// 	char dest2[10000] = "";

// 	// dest[10] = 'a';
// 	// dest2[10] = 'a';

// 	printf("%zu\n", ft_strlcat((void *)0, (void *)0, 0));
// 	printf("%zu\n", strlcat((void *)0, (void *)0, 0));
// 	printf("%s\n", dest);
// 	printf("%s", dest2);
// }
