/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 19:59:59 by jliew             #+#    #+#             */
/*   Updated: 2020/07/08 02:25:33 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}

int			ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	while (ft_isspace(*str))
		str++;
	sign = *str == '-' ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
		res = res * 10 + (*str++ - '0');
	return (res * sign);
}
