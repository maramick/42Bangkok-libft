/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:49:11 by pvudthic          #+#    #+#             */
/*   Updated: 2023/09/06 01:38:58 by maramick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_long_long(long long res, char str, int n)
{
	if (n > 0)
	{
		if (res == 922337203685477580 && (str - '0') > 7)
			return (-1);
		else if (res > 922337203685477580 && (str - '0') >= 0)
			return (-1);
	}
	else if (n < 0)
	{
		if (res == 922337203685477580 && (str - '0') > 8)
			return (0);
		else if (res > 922337203685477580 && (str - '0') >= 0)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			n;
	long long	res;
	int			check;

	i = 0;
	n = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		check = check_long_long(res, str[i], n);
		if (check == -1 || check == 0)
			return (check);
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return ((int)res * n);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char positive_common[12] = "2147483647";
// 	char negative_common[13] = "-2147483648";
// 	char max[21] = "9223372036854775807";
// 	char min[22] = "-9223372036854775808";
// 	char max_p1[21] = "9223372036854775808";
// 	char min_p1[22] = "-9223372036854775809";
// 	char max_p2[21] = "9223372036854775809";
// 	char min_p2[22] = "-9223372036854775810";
// 	char max_p5[21] = "9223372036854775812";
// 	char min_p5[22] = "-9223372036854775813";
// 	printf("atoi common : %d\n", atoi(positive_common));
// 	printf("ft_atoi common :%d\n", ft_atoi(positive_common));
// 	printf("atoi common : %d\n", atoi(negative_common));
// 	printf("ft_atoi common :%d\n\n", ft_atoi(negative_common));
// 	printf("atoi max : %d\n", atoi(max));
// 	printf("ft_atoi max :%d\n", ft_atoi(max));
// 	printf("atoi min : %d\n", atoi(min));
// 	printf("ft_atoi min :%d\n\n", ft_atoi(min));
// 	printf("atoi max+1 : %d\n", atoi(max_p1));
// 	printf("ft_atoi max+1 :%d\n", ft_atoi(max_p1));
// 	printf("atoi min+1 : %d\n", atoi(min_p1));
// 	printf("ft_atoi min+1 :%d\n\n", ft_atoi(min_p1));
// 	printf("atoi max+2 : %d\n", atoi(max_p2));
// 	printf("ft_atoi max+2 :%d\n", ft_atoi(max_p2));
// 	printf("atoi min+2 : %d\n", atoi(min_p2));
// 	printf("ft_atoi min+2 :%d\n\n", ft_atoi(min_p2));
// 	printf("atoi max+5 : %d\n", atoi(max_p5));
// 	printf("ft_atoi max+5 :%d\n", ft_atoi(max_p5));
// 	printf("atoi min+5 : %d\n", atoi(min_p5));
// 	printf("ft_atoi min+5 :%d\n\n", ft_atoi(min_p5));
// 	//printf("%llu\n", x);
// 	//printf("%llu", x);
// 	return (0);
// }
