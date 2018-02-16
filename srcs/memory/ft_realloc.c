/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 20:23:03 by cbaillat          #+#    #+#             */
/*   Updated: 2018/02/15 15:56:07 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

/*
** This function returns a pointer to a memory zone of the new length.
** If a void ptr is passed as a parameter, it behaves like malloc.
** If we ask for a bigger size, the rest of the memory zone is set to 0.
*/

/*void	*ft_realloc(void *ptr, size_t len, size_t new_len)
 {
	void	*tmp;

	if (new_len == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(new_len));
	else if (new_len <= len)
		return (ptr);
	tmp = malloc(new_len);
	if (tmp)
	{
		ft_memcpy(tmp, ptr, len);
		ft_bzero(tmp + len, new_len - len);
		free(ptr);
		return (NULL);
	}
	return (tmp);
}*/

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
