/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:19:43 by oba               #+#    #+#             */
/*   Updated: 2023/10/31 14:30:28 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			x;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	x = 0;
	if (!src || !len)
		return (dst);
	if (d > s)
	{
		while (len > x)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	while (x < len)
	{
		d[x] = s[x];
		x++;
	}
	return (dst);
}
