/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:02:37 by rguilher          #+#    #+#             */
/*   Updated: 2022/10/11 10:57:02 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION
**  The strchr() function returns a pointer 
**   to the first occurrence of the character c in the string s.
**RETURN VALUE
**  The  strchr() and strrchr() functions return a pointer
**   to the matched character or NULL if the character is not found.
**   The terminating null byte is considered part of the string, so that if c 
**   is specified as '\0', these functions return a pointer to the terminator
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s + i);
	}
	return (NULL);
}
