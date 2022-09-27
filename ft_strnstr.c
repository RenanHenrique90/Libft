/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:19:51 by coder             #+#    #+#             */
/*   Updated: 2022/09/21 20:54:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (!(neddle[n]))
		return ((char *)haystack);
	while (haystack[h])
	{
		n = 0;
		while (haystack[h + n] == neddle[n] && (h + n) < len)
		{
			if (!haystack[h + n] && !neddle[n])
				return ((char *)&haystack[h]);
			n++;
		}
		if (!neddle[n])
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
