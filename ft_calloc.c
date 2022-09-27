/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:24:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/23 23:50:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (nmemb > 2147483647 || size > 2147483647 || nmemb * size > 2147483647)
		return (0);
	pointer = malloc(nmemb * size);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
