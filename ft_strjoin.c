/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:16:31 by jliew             #+#    #+#             */
/*   Updated: 2020/07/08 14:58:03 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(strjoin = malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	strjoin[s1_len + s2_len] = '\0';
	i = 0;
	while (*s1)
		strjoin[i++] = *s1++;
	while (*s2)
		strjoin[i++] = *s2++;
	return (strjoin);
}
