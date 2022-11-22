/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:05:59 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/16 12:17:42 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		size;
	char	*ptr;
	int		i;

	size = ft_strlen(str);
	ptr = malloc((size + 1) * sizeof(char));
	if (!(ptr))
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
	char str[] = "vamos a fumar";
	char str2[] = "vamos a fumar";
	printf("%s\n", strdup(str));
	printf("%s", ft_strdup(str2));
}*/
