/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:01:57 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:01:58 by rguilher         ###   ########.fr       */
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
