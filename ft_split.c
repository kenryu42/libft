/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 03:50:51 by jliew             #+#    #+#             */
/*   Updated: 2020/07/17 17:03:15 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_splits(const char *s, char c, int *tab)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (*s)
	{
		if (*s != c)
			cnt++;
		if ((*s == c && cnt) || (!*(s + 1) && cnt))
		{
			tab[i++] = cnt;
			cnt = 0;
		}
		s++;
	}
	return (i);
}

static void	ft_strscpy(char **split, const char *s, char c)
{
	int i;
	int si;

	i = 0;
	si = 0;
	while (*s)
	{
		if (*s != c)
			split[si][i++] = *s;
		else if (*s == c && i)
		{
			si++;
			i = 0;
		}
		s++;
	}
}

static char	**ft_free(char **split, int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
		free(split[i++]);
	free(tab);
	free(split);
	return (NULL);
}

char		**ft_split(const char *s, char c)
{
	int		i;
	int		*tab;
	int		words;
	char	**split;

	if (!s || !(tab = ft_calloc((ft_strlen(s) / 2 + 5), sizeof(int))))
		return (NULL);
	words = ft_count_splits(s, c, tab);
	if (!(split = ft_calloc((words + 1), sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < words)
	{
		if (!(split[i] = ft_calloc(tab[i] + 1, sizeof(char))))
			return (ft_free(split, tab, i));
		i++;
	}
	free(tab);
	ft_strscpy(split, s, c);
	return (split);
}
