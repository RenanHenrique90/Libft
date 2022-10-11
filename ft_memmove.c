/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:01:57 by rguilher          #+#    #+#             */
/*   Updated: 2022/10/11 11:08:49 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION
**  The memmove() function copies n bytes from memory area src
**   to memory area dest.  The memory areas may overlap: 
**   copying takes place as though the bytes in src are first copied into
**   a temporary array that does not overlap src or dest, 
**   and the bytes are then copied from the temporary array to dest.
**RETURN VALUE
**  The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*d_last;
	const char	*s_last;

	d = (char *) dest;
	s = (const char *) src;
	d_last = (char *) dest + n;
	s_last = (const char *) src + n;
	if (dest < src)
	{
		while (n--)
			*d++ = *s++;
	}
	else
		while (n--)
			*--d_last = *--s_last;
	return (dest);
}
