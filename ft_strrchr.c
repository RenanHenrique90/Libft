/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:17:34 by coder             #+#    #+#             */
/*   Updated: 2022/09/27 22:17:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	int			i;
	const char	*init;

	i = ft_strlen(s);
	init = s;
	s = s + i;
	while (*s != *init && (char)ch != *s)
		s--;
	if ((char)ch == *s)
		return ((char *)s);
	return (NULL);
}
