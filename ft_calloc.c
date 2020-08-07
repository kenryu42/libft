/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 21:45:08 by jliew             #+#    #+#             */
/*   Updated: 2020/07/15 11:15:04 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	char	*alloc;

	n = count * size;
	if (!(alloc = malloc(n)))
		return (NULL);
	ft_bzero(alloc, n);
	return (alloc);
}
