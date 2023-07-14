/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:01:22 by rbulanad          #+#    #+#             */
/*   Updated: 2023/01/09 15:23:18 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwrd(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (s[i] == c)
		i++;
	if (s[0] != c)
		word++;
	while (s[i])
	{
		if (s[i + 1] != c && s[i] == c)
			word++;
		i++;
	}
	if (s[0] != c && word == 2)
		word--;
	return (word);
}

static char	*substr2(char const *s, int start, int end)
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

static void	write_tab(char **tab, char const *s, char c)
{
	int	i;
	int	word;
	int	depart;
	int	end;

	i = 0;
	word = 0;
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
			tab[word++] = substr2(s, depart, end);
		}
	}
	tab[word] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		word;

	if (!s)
		return (NULL);
	word = countwrd (s, c);
	tab = malloc((word + 1) * sizeof(char *));
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
	tab = ft_split("--1-2-----3----4---5--42", '-');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("%s", tab[i]);
}*/
