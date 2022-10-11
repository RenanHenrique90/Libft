/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:00:34 by rguilher          #+#    #+#             */
/*   Updated: 2022/10/11 10:34:22 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION
**	The  malloc()  function allocates size bytes and returns a pointer to the allocated memory.  
**	The memory is not initialized.  
**	If size is 0, then malloc() returns either NULL,
		or a unique pointer value that can later be      
**	successfully passed to free().
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	size_max;

	size_max = -1;
	if (nmemb != 0 && size > size_max / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
