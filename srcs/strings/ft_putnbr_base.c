/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 12:51:54 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/24 20:10:25 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

#define MAX_NB_LEN 64

static void	put_prefix(int8_t base)
{
	if (base == 2)
		ft_putstr("0b");
	else if (base == 8)
		ft_putstr("0");
	else if (base == 16)
		ft_putstr("0x");
}

void		ft_putnbr_base(uint64_t n, int8_t base)
{
	char	number[MAX_NB_LEN];
	char	*base_str;
	int8_t	digit;

	base_str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	digit = 0;
	put_prefix(base);
	if (n == 0)
		ft_putchar('0');
	while (n > 0)
	{
		number[digit] = base_str[n % base];
		n = n / base;
		digit++;
	}
	digit--;
	while (digit >= 0)
	{
		ft_putchar(number[digit]);
		digit--;
	}
}
