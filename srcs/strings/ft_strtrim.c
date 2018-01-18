/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:08:12 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:49:21 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

char	*ft_strtrim(char const *s)
{
	int				start;
	char			*s_new;
	char			*s_end;

	if (s == NULL)
		return (NULL);
	start = 0;
	if (*s == '\0')
		return (ft_strnew(1));
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		++start;
	if (s[start] == '\0')
		return (ft_strnew(1));
	s_end = (char *)s;
	while (*s_end != '\0')
		++s_end;
	--s_end;
	while ((*s_end == ' ' || *s_end == '\n' || *s_end == '\t') && s_end != s)
		--s_end;
	s_new = ft_strsub(s, start, (s_end - s - start + 1));
	return (s_new);
}
