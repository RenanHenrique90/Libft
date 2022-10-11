/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:01:50 by rguilher          #+#    #+#             */
/*   Updated: 2022/10/11 11:05:59 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION
**  The memcpy() function copies n bytes from memory area src 
**   to memory area dest.  The memory areas must not overlap.
**   Use memmove(3) if the memory areas do overlap.
**RETURN VALUE
**  The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)d)[i] = ((unsigned char *)s)[i];
		i++;
	}
	return (dest);
}
