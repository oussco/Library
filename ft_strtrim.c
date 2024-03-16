/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:08:29 by oba               #+#    #+#             */
/*   Updated: 2024/01/23 10:50:28 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_debut(const char *s1, const char *set)
{
	size_t	lon;
	size_t	x;

	lon = ft_strlen(s1);
	x = 0;
	while (x < lon)
	{
		if (ft_strchr(set, s1[x]) == 0)
			break ;
		x++;
	}
	return (x);
}

int	ft_fin(const char *s1, const char *set)
{
	size_t	lon;
	size_t	x;

	lon = ft_strlen(s1);
	x = 0;
	while (x < lon)
	{
		if (ft_strchr(set, s1[lon - x - 1]) == 0)
			break ;
		x++;
	}
	return (lon - x);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		debut;
	int		fin;
	char	*strtrimed;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup((char *)s1));
	debut = ft_debut(s1, set);
	fin = ft_fin(s1, set);
	if (debut >= fin)
		return (ft_strdup(""));
	strtrimed = (char *)malloc(sizeof(char) * (fin - debut + 1));
	if (strtrimed == NULL)
		return (NULL);
	ft_strlcpy(strtrimed, s1 + debut, fin - debut + 1);
	return (strtrimed);
}
