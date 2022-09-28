/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:29:16 by coder             #+#    #+#             */
/*   Updated: 2022/09/27 22:30:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
