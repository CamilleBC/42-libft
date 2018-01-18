/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:23:49 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != 0 && ((unsigned char)*s1 == (unsigned char)*s2) && n > 0)
	{
		--n;
		if (n == 0)
			return ((int)((unsigned char)*s1 - (unsigned char)*s2));
		++s1;
		++s2;
	}
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}
