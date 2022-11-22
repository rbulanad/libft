/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:03:19 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/12 11:48:44 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *depart, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) depart;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[30] = "J'aime les kiwis";
	char str2[30] = "J'aime les pasteques";
	printf("%s\n", str);
	ft_memset(str, 'R', 5*sizeof(char));
	printf("%s\n", str);
	printf("%s\n", str2);
	memset(str2, 'R', 5);
	printf("%s", str2);
}*/
