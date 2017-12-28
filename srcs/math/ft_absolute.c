/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 01:11:17 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/27 21:47:47 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uintmax_t	ft_absolute(intmax_t n)
{
	if (n < 0)
		return ((uintmax_t)-n);
	return ((uintmax_t)n);
}
