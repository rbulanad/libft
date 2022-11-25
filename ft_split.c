/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:01:22 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/25 16:55:24 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countmots(char const *s, char c)
{
	int	i;
	int	mots;

	i = 0;
	mots = 0;
	if (s[0] != c)
		mots++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			mots++;
		i++;
	}
	return (mots);
}

char	*substr2(char const *s, int start, int end)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(((end - start + 1) * sizeof(char)));
	while (start != end)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

void	write_tab(char **tab, char const *s, char c)
{
	int	i;
	int	mots;
	int	depart;
	int	end;

	i = 0;
	mots = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		depart = i;
		if (s[i])
		{
			while (s[i] != c && s[i])
				i++;
			end = i;
			tab[mots++] = substr2(s, depart, end);
		}
	}
	tab[mots] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		mots;

	if (!s)
		return (NULL);
	mots = countmots (s, c);
	tab = malloc((mots + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	write_tab(tab, s, c);
	return (tab);
}
/*
int main ()
{
	char **tab;
	int	i;

	i = 0;
	tab = ft_split("mikomimijiji", 'i');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("%s", tab[]);
}*/
