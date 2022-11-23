/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:56:02 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/23 12:27:34 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	long	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long		n2;
	char		*ret;
	long		i;

	n2 = (long)n;
	i = ft_count(n2);
	ret = malloc ((i + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ret[i--] = '\0';
	if (n2 == 0)
		ret[i] = '0';
	if (n2 < 0)
	{
		n2 *= -1;
		ret[0] = '-';
	}
	while (n2 > 0)
	{
		ret[i] = (n2 % 10) + '0';
		n2 /= 10;
		i--;
	}
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_itoa(-2147483648));
}*/
