/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:33:06 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/22 11:57:52 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ret;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_check(s1[i], set) == 1)
		i++;
	while (j > i && ft_check(s1[j - 1], set) == 1)
		j--;
	ret = ft_substr(s1, i, j - i);
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_strtrim("bca1234abc56789ab", "abc"));
}*/
