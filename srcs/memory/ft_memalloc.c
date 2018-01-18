/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:54:35 by cbaillat          #+#    #+#             */
/*   Updated: 2018/01/18 13:46:39 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

void	*ft_memalloc(size_t size)
{
	t_byte	*memory;

	if ((memory = malloc(sizeof(memory) * size)) == NULL)
		return (NULL);
	ft_memset((void *)memory, 0, size);
	return ((void *)memory);
}
