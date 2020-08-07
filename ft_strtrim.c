/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:32:21 by jliew             #+#    #+#             */
/*   Updated: 2020/07/15 11:10:52 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	size_t		len;
	size_t		end;
	size_t		start;
	size_t		slen;
	char		*strtrim;

	if (!s1 || !set)
		return (NULL);
	slen = ft_strlen(s1);
	start = 0;
	end = !slen ? 0 : slen - 1;
	while (ft_check_set(s1[start], set))
		start++;
	while (end > 0 && ft_check_set(s1[end], set))
		end--;
	len = (start > end) ? 1 : end - start + 1;
	if (!(strtrim = ft_substr(s1, start, len)))
		return (NULL);
	return (strtrim);
}
