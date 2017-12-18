/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 09:17:58 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/18 10:53:36 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** We test the utf-8 char to see how many bytes it has.
** Depending on that, we use mask to write value without the
*/

static void	print_4bytes(uint32_t wchar)
{
	char 		buffer[4];

	tmp[0] = ((wchar >> 18) & 0x07) | 0xF0;
	tmp[1] = ((wchar >> 12) & 0x3F) | 0x80;
	tmp[2] = ((wchar >> 6) & 0x3F) | 0x80;
	tmp[3] = (wchar & 0x3F) | 0x80;
	write (1, &wchar, 4);
}

static void	print_3bytes(uint32_t wchar)
{
	char 		buffer[3];

	tmp[0] = ((wchar >> 12) & 0x3F) | 0x80;
	tmp[1] = ((wchar >> 6) & 0x3F) | 0x80;
	tmp[2] = (wchar & 0x3F) | 0x80;
	write (1, &wchar, 3);
}

static void	print_3bytes(uint32_t wchar)
{
	char 		buffer[2];

	tmp[0] = ((wchar >> 6) & 0x3F) | 0x80;
	tmp[1] = (wchar & 0x3F) | 0x80;
	write (1, &wchar, 2);
}


static void	print_utf8(uint32_t wchar);
{
	if (wchar > 0x1000)
		print_4bytes(wchar);
	else if (wchar > 0x800)
		print_3bytes(wchar);
	else if (wchar > 0x80)
		print_2bytes(wchar);
	else
		tmp[0] = (wchar & 0x3F) | 0x80;
}

void		ft_putchar(char c)
{
	if (c > 0x80)
		print_utf8((uint32_t)c);
	else
		write(1, &c, 1);
}
