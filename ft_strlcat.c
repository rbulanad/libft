/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:17:42 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/17 16:31:15 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return ((size_t)ft_strlen(src));
	if (size <= (size_t)ft_strlen(dst))
		return (size + (size_t)ft_strlen(src));
	while (dst[i])
		i++;
	while (src[j] && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return (i + (size_t)ft_strlen((const char *)src));
}
/*
int main(void)
{
	char *dest;
	char *dest2;
	dest[10] = 'a';
	dest2[10] = 'a';
	strlcat(dest, "lorem ipsum mes grosses fesses", 8);
	ft_strlcat(dest2, "lorem ipsum mes grosses fesses", 8);
	printf("original: %s\nmine: %s\n", dest, dest2);
}*/
