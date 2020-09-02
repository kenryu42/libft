/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 12:00:36 by jliew             #+#    #+#             */
/*   Updated: 2020/09/02 12:38:02 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long n, int base)
{
	size_t		len;
	char		*itoa;

	len = ft_count_digit(n, base);
	if (!(itoa = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	itoa[len] = 0;
	if (n < 0)
	{
		itoa[0] = '-';
		n = -n;
	}
	while (len-- && n)
	{
		itoa[len] = "0123456789abcdef"[n % base];
		n /= base;
	}
	return (itoa);
}
