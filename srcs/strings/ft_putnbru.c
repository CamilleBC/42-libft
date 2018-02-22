/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:59:42 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/22 11:09:20 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

#define MAX_UINT64_LEN 20

void	ft_putnbru(uint64_t n)
{
	char	number[MAX_UINT64_LEN];
	int8_t	digit;

	digit = 0;
	if (n == 0)
		ft_putchar('0');
	while (n > 0)
	{
		number[digit] = (n % 10) + '0';
		n = n / 10;
		digit++;
	}
	digit--;
	while (digit >= 0)
	{
		ft_putchar(number[digit]);
		digit--;
	}
}
