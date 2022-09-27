/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:44:26 by coder             #+#    #+#             */
/*   Updated: 2022/09/21 23:19:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	unsigned const char	*str;

	str = (unsigned const char *) s;
	ch = (unsigned char) c;
	while (n--)
	{
		if (*str == ch)
			return ((void *) str);
		str++;
	}
	return ((void *)0);
}
