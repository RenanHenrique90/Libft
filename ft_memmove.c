/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:26:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/23 01:04:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
