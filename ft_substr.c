/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:04:34 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:21:38 by rguilher         ###   ########.fr       */
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
	char    *substr;
    
    s = s + start;
    substr = malloc((len + 1) * sizeof(char));
    if (!s || !substr)
        return (NULL);
    while (len--)
        *substr++ = *s++;
    *substr = 0;
    return (substr);
}
