/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 11:20:41 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	size;
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	size = ft_strlen(s);
	i = 0;
	while (i < size)
	{
		f(&s[i]);
		++i;
	}
}
