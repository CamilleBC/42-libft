/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 20:23:03 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/19 08:30:24 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

/*
** This function returns a pointer to a memory zone of the new, bigger, length.
** If a void ptr is passed as a parameter, it behaves like malloc.
** If we ask for a bigger size, the rest of the memory zone is set to 0.
*/

void	*ft_realloc(void *data, size_t len, size_t size)
{
	void	*tmp;

	if (!(tmp = malloc(size)))
	{
		if (data)
			free(data);
		return (NULL);
	}
	if (!data)
		return (tmp);
	ft_memmove(tmp, data, len);
	free(data);
	return (tmp);
}
