/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 22:36:54 by jliew             #+#    #+#             */
/*   Updated: 2020/07/08 15:38:35 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t res;
	size_t src_n;
	size_t dst_n;

	dst_n = ft_strlen(dst);
	src_n = ft_strlen(src);
	res = (src_n + n < dst_n + src_n) ? src_n + n : dst_n + src_n;
	while (n > (dst_n + 1) && *src)
		dst[dst_n++] = *src++;
	if (n)
		dst[dst_n] = '\0';
	return (res);
}
