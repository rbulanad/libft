/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:18:46 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/16 17:13:34 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dst2;
	char	*src2;

	i = 0;
	if ((!dst && !src) || (int)n < 0)
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (n)
	{
		dst2[i] = src2[i];
		n--;
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char *str1;
	//char str1[30] = "abcdefgh"; 
  	char str2[30] = "123456789";
	printf("str1 before memcpy %s\n", str1);
	memcpy(str1, str2, 9);
	printf("str1 after memcpy %s\n", str1);
	
	char *str3;
	//char str3[30] = "abcdefgh"; 
  	char str4[30] = "123456789";
	printf("str3 before memcpy %s\n", str3);
	ft_memcpy(str3, str4, 9);
	printf("str3 after memcpy %s\n", str3);
}*/
