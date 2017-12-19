/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wputstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:12:15 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/19 16:39:03 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_wputstr(wchar_t	*s)
{
	size_t	len;
	if (s == NULL)
		return ;
	len = ft_wstrlen(s);
	write(1, s, len);
}
