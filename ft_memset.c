/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguilher <rguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:02:06 by rguilher          #+#    #+#             */
/*   Updated: 2022/09/28 22:02:06 by rguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int v, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)p)[i++] = v;
	return (p);
}
