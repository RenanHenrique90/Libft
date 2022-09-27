/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:25:15 by coder             #+#    #+#             */
/*   Updated: 2022/09/27 21:45:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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