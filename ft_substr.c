/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:36:47 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/21 13:56:24 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*result;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else if ((size_t)ft_strlen(s) < len)
	{
		j = (ft_strlen(s) + start) + 1;
		result = malloc (j * sizeof(char));
	}
	else
	{
		j = len + 1;
		result = malloc (j * sizeof(char));
	}
	if (!result)
		return (NULL);
	j = ft_strlcpy(result, &s[start], j);
	return (result);
}
/*
#include <stdio.h>
int main()
{
	size_t size = 10;
	char str[] = "YOLO ! ! ! !";
	printf("%s", ft_substr(str, 0, size));
}*/
