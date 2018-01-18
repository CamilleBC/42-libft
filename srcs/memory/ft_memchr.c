/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:02:56 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:46:39 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*bytes_s;

	bytes_s = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (bytes_s[i] == (unsigned char)c)
			return (&bytes_s[i]);
	return (NULL);
}
