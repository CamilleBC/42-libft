/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:46:29 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
** Deletes all occurences of the char c in *s
*/

void	ft_strcdel(char *s, char c)
{
	int		i;

	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		if (*s == c)
		{
			i = 0;
			while (s[i] != '\0')
			{
				s[i] = s[i + 1];
				++i;
			}
			s[i] = '\0';
		}
		++s;
	}
}
