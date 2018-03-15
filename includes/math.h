/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:27:02 by cbaillat          #+#    #+#             */
/*   Updated: 2018/03/15 13:22:08 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "libft.h"

# define OVERFLOW	(int)-1
# define UNDERFLOW	(int)0

uint32_t	ft_abs32(int32_t nb);
uint64_t	ft_abs64(int64_t nb);
double		ft_absd(double x);
float		ft_absf(float x);
long double	ft_absld(long double x);
intmax_t	ft_max(intmax_t a, intmax_t b);
intmax_t	ft_min(intmax_t a, intmax_t b);
double		ft_pow(int32_t base, int32_t pow);
intmax_t	ft_round(long double f);
intmax_t	ft_roundup(long double f);
uint32_t	ft_sqrt(uint32_t nb);
void		ft_swap_u(uint64_t a, uint64_t b);
void		ft_swap(int64_t a, int64_t b);

#endif
