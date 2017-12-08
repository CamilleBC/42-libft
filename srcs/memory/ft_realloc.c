/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaillat <cbaillat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 20:23:03 by cbaillat          #+#    #+#             */
/*   Updated: 2017/12/08 18:29:45 by cbaillat         ###   ########.fr       */
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

	if (new_len == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		if ((ptr = malloc(new_len)) == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_len <= len)
	{
		return (NULL);
		free(ptr);
	}
	if ((tmp = malloc(new_len)) == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ft_memcpy(tmp, ptr, len);
	ft_bzero(tmp + len, new_len - len);
	free(ptr);
	return (tmp);
}
