/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:07:04 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/22 12:54:45 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

#define MAX_INT_LENGTH 11

void	ft_putnbr_fd(int64_t n, int64_t fd)
{
	char	number[MAX_INT_LENGTH];
	int		digit;

	digit = 0;
	if (n > 0)
		n *= -1;
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
		ft_putchar_fd('-', fd);
	while (n < 0)
	{
		number[digit] = -(n % 10) + '0';
		n = n / 10;
		digit++;
	}
	digit--;
	while (digit >= 0)
	{
		ft_putchar_fd(number[digit], fd);
		digit--;
	}
}
