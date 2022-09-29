/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:02:50 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:30:49 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**
**DESCRIPTION:
**  Allocates (with malloc(3)) and returns a new
**  string, which is the result of the concatenation
**  of ’s1’ and ’s2’.
**RETURN VALUE:
**  The new string.
**  NULL if the allocation fails.
*/

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    size_t  len_s1;

    len_s1 = ft_strlen(s1);
    new_str = malloc((len_s1 + ft_strlen(s2) + 1) * sizeof(char));
    if(!new_str)
        return (NULL);
    while(*s1)
        *new_str++ = *s1++;
    while(*s2)
        *new_str++ = *s2++;
    *new_str = 0;
    return (new_str);
}
