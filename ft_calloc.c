/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:00:34 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:41:17 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION
**	The  malloc()  function allocates size bytes and returns a pointer to the allocated memory.  
**	The memory is not initialized.  
**	If size is 0, then malloc() returns either NULL, or a unique pointer value that can later be      
**	successfully passed to free().
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (nmemb > 2147483647 || size > 2147483647 || nmemb * size > 2147483647)
		return (0);
	pointer = malloc(nmemb * size);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
