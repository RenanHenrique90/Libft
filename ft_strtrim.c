/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:09:11 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:09:11 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
**Parameters: 
**  s1  -The string to be trimmed.
**  set -The reference set of characters to trim.
**Description:
**  Allocates (with malloc(3)) and returns a copy of
**  ’s1’ with the characters specified in ’set’ removed
**  from the beginning and the end of the string.
**/

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  len;

    if(!s1 || !set)
        return (NULL);
        while (*s1 && ft_strchr(*s1, set))
        s1++;
    len = ft_strlen(s1);
    while (len && ft_strchr(*s1, set))
        len--;
    return (ft_substr(s1, 0, len + 1));
}
