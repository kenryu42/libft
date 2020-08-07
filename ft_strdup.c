/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 16:10:13 by jliew             #+#    #+#             */
/*   Updated: 2020/07/05 18:26:18 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	n;
	char	*res;

	n = ft_strlen(str);
	if (!(res = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (i <= n)
		res[i++] = *str++;
	return (res);
}
