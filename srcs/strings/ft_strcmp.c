/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:56:55 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != 0 && ((unsigned char)*s1 == (unsigned char)*s2))
	{
		++s1;
		++s2;
	}
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}
