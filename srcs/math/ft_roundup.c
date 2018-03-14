/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roundup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 11:12:50 by cbaillat          #+#    #+#             */
/*   Updated: 2018/03/14 11:13:35 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

intmax_t	ft_roundup(long double f)
{
	intmax_t	integer;
	long double	decimal;

	integer = (intmax_t)f;
	decimal = f - integer;
	if (decimal >= 0)
		return (integer + 1);
	else
		return (integer);
}
