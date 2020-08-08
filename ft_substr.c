/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 01:22:10 by jliew             #+#    #+#             */
/*   Updated: 2020/07/15 10:09:52 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	size_t	slen;
	size_t	sublen;
	char	*substr;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup("\0"));
	sublen = (slen - start) < len ? (slen - start) : len;
	if (!(substr = malloc(sizeof(char) * (sublen + 1))))
		return (NULL);
	substr[sublen] = '\0';
	while (sublen--)
		substr[i++] = s[start++];
	return (substr);
}
