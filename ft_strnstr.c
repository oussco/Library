/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba@student.42quebec.com <oba@student.42qu +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:29:35 by oba@student.42qu  #+#    #+#             */
/*   Updated: 2023/11/07 14:24:02 by oba@student.42qu ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*grd;
	char	*pti;
	size_t	x;
	size_t	y;
	size_t	lgpti;

	x = 0;
	grd = (char *)big;
	pti = (char *)little;
	lgpti = ft_strlen(pti);
	if (lgpti == 0 || grd == pti)
		return (grd);
	while (grd[x] && x < len)
	{
		y = 0;
		while (grd[x + y] == pti[y] && x + y < len
			&& grd[x + y] != '\0' && pti[y] != '\0')
			y++;
		if (y == lgpti)
			return (grd + x);
		x++;
	}
	return (0);
}
