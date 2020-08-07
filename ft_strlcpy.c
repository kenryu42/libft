/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 21:16:51 by jliew             #+#    #+#             */
/*   Updated: 2020/07/08 14:49:13 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t src_n;

	src_n = ft_strlen(src);
	if (!n)
		return (src_n);
	while (--n && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (src_n);
}
