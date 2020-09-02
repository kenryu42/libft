/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 12:26:28 by jliew             #+#    #+#             */
/*   Updated: 2020/09/02 12:29:52 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digit(long long n, int base)
{
	size_t	ans;

	ans = n < 0 ? 1 : 0;
	while (n)
	{
		ans++;
		n /= base;
	}
	return (ans);
}
