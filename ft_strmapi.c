/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:37:16 by oba               #+#    #+#             */
/*   Updated: 2024/01/31 10:40:26 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*map;

	if (!s)
		return (NULL);
	x = 0;
	map = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (map == NULL)
		return (NULL);
	while (s[x] != '\0')
	{
		map[x] = f(x, s[x]);
		x++;
	}
	map[x] = '\0';
	return (map);
}
