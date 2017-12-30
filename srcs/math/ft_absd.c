/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 23:15:37 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/30 23:16:03 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_absd(double x)
{
	uint64_t casted;

	casted = *(uint64_t*) &x;
	casted &= 0x7FFFFFFFFFFFFFFF;
	return *(double*)&casted;
}
