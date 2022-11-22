/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:52:17 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/21 09:18:16 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;
	int		len;

	ptr = (char *)s;
	i = 0;
	len = ft_strlen(s);
	if (c > 127 || c < 0)
		return ((char *)s);
	while (i <= len)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
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
