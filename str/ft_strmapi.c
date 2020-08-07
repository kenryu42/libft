/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:11:36 by jliew             #+#    #+#             */
/*   Updated: 2020/07/09 12:31:26 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strmapi;

	if (!s || !f || !(strmapi = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (strmapi[i])
	{
		strmapi[i] = f(i, strmapi[i]);
		i++;
	}
	return (strmapi);
}
