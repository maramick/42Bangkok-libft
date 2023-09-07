/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:54:33 by pvudthic          #+#    #+#             */
/*   Updated: 2023/09/06 01:54:42 by maramick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char *str;

	str = s;
	while (*s)
		s++;
	return (s - str);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[9] = "Phanuwat";

	printf("%zu\n", ft_strlen(str + 10));
	printf("%zu", strlen(str + 10));
	//printf("%zu\n", ft_strlen(0));
	//printf("%zu", strlen(0));
	return 0;
}
