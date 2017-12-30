/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 19:35:42 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/30 19:40:15 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_abs_float(double x)
{
	uint64_t casted;

	casted = *(uint64_t*) &x;
	casted &= 0x7FFFFFFFFFFFFFFF;
	return *(double*)&casted;
}
