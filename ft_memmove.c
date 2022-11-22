/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:57:41 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/15 17:54:04 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	if ((!dst && !src) || (int)n < 0)
		return (NULL);
	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 > src2)
	{
		while (n-- > 0)
			dst2[n] = src2[n];
	}
	else
	{
		while (i < n)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
	char str1[] = "abcdef";
    char str2[] = "123456789";
	char str3[] = "abcdef";
	char str4[] = "123456789";

	printf("Before: %s | After: %s\n", str1, memmove(str1, str2, 4));
	printf("Before: %s | After: %s", str3, ft_memmove(str3, str4, 4));

    return 0;
}*/
