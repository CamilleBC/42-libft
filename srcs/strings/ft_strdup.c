/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:36:55 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*s_copy;
	int		i;

	size = ft_strlen(s);
	if ((s_copy = (char *)malloc(sizeof(*s_copy) * size + 1)) == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s_copy[i] = s[i];
		++i;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
