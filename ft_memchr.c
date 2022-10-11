/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:01:31 by rguilher          #+#    #+#             */
/*   Updated: 2022/10/11 11:01:28 by rguilher         ###   ########.fr       */
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
	return (NULL);
}
