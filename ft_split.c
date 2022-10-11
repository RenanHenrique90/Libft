/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 00:49:30 by rguilher          #+#    #+#             */
/*   Updated: 2022/10/11 10:50:20 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION:
**  Allocates (with malloc(3)) and returns an array
**  of strings obtained by splitting ’s’ using the
**  character ’c’ as a delimiter. The array must end
**  with a NULL pointer.
**RETURN VALUE:
**  The array of new strings resulting from the split.
**  NULL if the allocation fails
*/

#include "libft.h"

static int	ft_getstr(char *str, char e)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == e)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != e)
			i++;
	}
	return (count);
}

static int	ft_str_len(char *str, char d)
{
	int	i;

	i = 0;
	while (str[i] != 0 && str[i] != d)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;
	int		count;
	int		length;
	int		j;

	count = ft_getstr((char *)s, c);
	copy = malloc ((count + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			length = ft_str_len((char *)s, c);
			copy[j] = ft_substr((char *)s, 0, length);
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	copy[j] = 0;
	return (copy);
}
