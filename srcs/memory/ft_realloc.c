/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 20:23:03 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/05 15:50:11 by cbaillat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function returns a pointer to a memory zone of the new length.
** If a void ptr is passed as a parameter, it behaves like malloc.
** If we ask for a bigger size, the rest of the memory zone is set to 0.
*/

void	*ft_realloc(void *ptr, size_t len, size_t new_len)
{
	void	*tmp;

	if (ptr == NULL)
	{
		if ((ptr = malloc(new_len)) == NULL)
			return (NULL);
		return (ptr);
	}
	if ((tmp = malloc(new_len)) == NULL)
		return (NULL);
	if (new_len >= len)
	{
		ft_memcpy(tmp, ptr, len);
		ft_bzero(tmp + len, new_len - len);
	}
	else
		ft_memcpy(tmp, ptr, new_len);
	free(ptr);
	return (tmp);
}
