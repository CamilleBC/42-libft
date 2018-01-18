/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:32:21 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 17:54:51 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

static int32_t	ft_getsignedness(char c, int8_t *sign)
{
	if ((c == '+') || (c == '-'))
	{
		if (c == '-')
			*sign = -1;
		return (1);
	}
	return (0);
}

static int32_t	ft_checkoverflow(int32_t number, int8_t digit, int8_t sign)
{
	if (number > (MAX_32 / 10))
	{
		if (sign == 1)
			return (OVERFLOW);
		else
			return (UNDERFLOW);
	}
	else if (number == (MAX_32 / 10))
	{
		if (sign == 1 && (digit > 7))
			return (OVERFLOW);
		if (sign == -1 && (digit < 8))
			return (OVERFLOW);
	}
	return (SUCCESS);
}

int			ft_atoi(const char *str)
{
	int8_t	sign;
	int32_t	number;
	int8_t	digit;
	int8_t	no_overflow;

	sign = 1;
	number = 0;
	no_overflow = OVERFLOW;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
			|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		++str;
	if (ft_getsignedness(*str, &sign))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		if ((no_overflow = ft_checkoverflow(number, digit, sign)) != OK)
			return (no_overflow);
		number = (number * 10) + digit;
		++str;
	}
	if (number > MAX_32)
		return (OVERFLOW);
	return (number * sign);
}
