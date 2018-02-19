/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 12:51:54 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/19 08:29:31 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

#define MAX_NB_LEN 64

static void	check_sign(int64_t *n)
{
	if (*n == 0)
		ft_putchar('0');
	else if (*n < 0)
		ft_putchar('-');
	if (*n > 0)
		*n = (*n) * -1;
}

static void	put_prefix(int8_t base)
{
	if (base == 2)
		ft_putstr("0b");
	else if (base == 8)
		ft_putstr("0");
	else if (base == 16)
		ft_putstr("0x");
}

void		ft_putnbr_base(int64_t n, int8_t base)
{
	char	number[MAX_NB_LEN];
	char	*base_str;
	int8_t	digit;

	base_str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	digit = 0;
	put_prefix(base);
	check_sign(&n);
	while (n < 0)
	{
		number[digit] = base_str[-(n % base)];
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
