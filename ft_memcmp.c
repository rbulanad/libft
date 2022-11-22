/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:09:05 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/18 15:24:54 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (0);
}
/*
int main()
{
	char tab[] = {0, 1, 9, 6, 5, 3, -32, 65, 84, 2, 32, 81, 2};
	char tabDub[] = {0, 1, 9, 6, 5, 3, 32, 65, 84, 2, 32, -81, 2};
	printf("%d\n", memcmp("test", "", 8));
	printf("%d", ft_memcmp("test", "", 8));
}*/
