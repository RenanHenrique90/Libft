/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:04:16 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:25:28 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION:
**	The strchr() function returns a pointer to the first occurrence of the character c in the string s.
**RETURN VALUE:
**	The  strchr()  and  strrchr()  functions return a pointer to the matched character or NULL if the character is not found.  The terminating null byte is considered **  part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.          
*/

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
