/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:39:05 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/18 17:01:56 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*find || (!str && len == 0))
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (find[j] && str[i + j] == find[j]
			&& (i + j) < len)
			j++;
		if (find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	printf("%s\n", strnstr(haystack, needle, -1));
	printf("%s", ft_strnstr(haystack, needle, -1));
}*/
