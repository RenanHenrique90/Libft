/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:04:34 by rguilher          #+#    #+#             */
/*   Updated: 2022/10/11 10:51:42 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
**Parameters: 
**  s: The string from which to create the substring.
**  start: The start index of the substring in the
**  string ’s’.
**  len: The maximum length of the substring.
**  
**Description:
**  Allocates (with malloc(3)) and returns a substring
**  from the string ’s’.
**  The substring begins at index ’start’ and is of
**  maximum size ’len’
**/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start >= ft_strlen(s))
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	i = 0;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
