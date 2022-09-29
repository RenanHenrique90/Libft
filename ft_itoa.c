/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:01:21 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:44:30 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**DESCRIPTION
**	itoa () function is used to convert int data type to string data type in C language.
**RETURN VALUE
**	The string converted
*/

#include "libft.h"

static char	*transfer_itoa(char *str,
							size_t size,
							unsigned int n,
							unsigned int is_negative)
{
	str[size] = 0;
	while (size--)
	{
		str[size] = n % 10 + 48;
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

size_t	ft_nbrlen(int n)
{
	size_t len;

	len = 1;
	if (n < 0)
		len++;
	n /= 10;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			nbr_digtis;
	unsigned int	is_negative;
	char			*str;

	is_negative = 0;
	nbr_digtis = ft_nbrlen(n);
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	str = malloc((nbr_digtis + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (transfer_itoa(str, nbr_digtis, n, is_negative));
}
