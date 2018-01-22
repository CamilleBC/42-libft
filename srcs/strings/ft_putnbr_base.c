/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 12:51:54 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/22 19:55:39 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

#define MAX_NB_LEN 64

void	ft_putnbr_base(int64_t n, int8_t base)
{
	char	number[MAX_NB_LEN];
	char	*base_str;
	int8_t		digit;

	base_str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	digit = 0;
	ft_putstr("[BASE=");
	ft_putnbr(base);
	ft_putchar(']');
	if (n == 0)
		ft_putchar('0');
	else if (n < 0)
		ft_putchar('-');
	if (n > 0)
		n *= -1;
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
