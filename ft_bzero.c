/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:00:06 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/12 11:49:44 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	if (n == 0)
		return ;
	tmp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}
/*
int main(void)
{
	char str[50] = "J'aime les kiwis";
	char str2[50] = "J'aime les pasteques";
	bzero(str + 2, 2);
	printf("%s\n", str);
	ft_bzero(str2 + 2 , 2);
	printf("%s\n", str2);
}*/
