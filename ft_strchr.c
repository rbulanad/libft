/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:52:17 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/23 08:55:50 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != (char)c && ptr[i])
		i++;
	if (ptr[i] == (char)c)
		return (&ptr[i]);
	return (NULL);
}
/*
int main()
{
	char str[] = "tripouille";
	char str2[] = "tripouille";
	printf("%s\n", strchr(str, 't' + 256));
	printf("%s\n", ft_strchr(str2, 't' + 256));
}*/
