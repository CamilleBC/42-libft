/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:26:48 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	size;
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		f(i, &s[i]);
		++i;
	}
}
