/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 17:53:04 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/11 17:57:09 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	char	mine[100] = {0};
	char	theirs[100] = {0};

	ft_memset(mine, 'A', 99);
	memset(theirs, 'A', 99);

	ft_putstr("Mine: ");
	ft_putstr(mine);
	ft_putchar('\n');
	ft_putstr("Theirs: ");
	ft_putstr(theirs);
	ft_putchar('\n');
}
