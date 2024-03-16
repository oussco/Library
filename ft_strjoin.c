/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:44:17 by oba               #+#    #+#             */
/*   Updated: 2024/01/16 10:26:02 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_rempli(char	*str, char *str1, size_t x)
{
	size_t	z;

	z = 0;
	while (str1 && z < x)
	{
		str[z] = str1[z];
		z++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	*str;

	x = ft_strlen((char *)s1);
	y = ft_strlen((char *)s2);
	z = 0;
	str = malloc(sizeof(char) * (x + y) + 1);
	if (!str)
		return ((void *) 0);
	if (str && s1 && s2)
	{
		str = ft_rempli(str, (char *)s1, x);
		z = 0;
		while (s2 && z < y)
		{
			str[x] = s2[z];
			x++;
			z++;
		}
		str[x] = '\0';
		return (str);
	}
	return (NULL);
}

// int	main(void)

// {
// 	char const	*s1;
// 	char const	*s2;
// 	char		*str;

// 	s1 = "\0";
// 	s2 = "\0";
// 	str = ft_strjoin(s1, s2);
// 	printf("%s", str);
// 	return (0);
// }
