/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:01:05 by oba               #+#    #+#             */
/*   Updated: 2023/10/22 13:25:27 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	caractere;
	unsigned char	*source;

	source = (unsigned char *)s;
	caractere = (unsigned char)c;
	x = 0 ;
	while (x < n)
	{
		if (*source == caractere)
		{
			return (source);
		}
		source++;
		x++;
	}
	return (NULL);
}
