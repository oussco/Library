/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ousmane <ousmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:08:14 by ousmane           #+#    #+#             */
/*   Updated: 2023/11/06 19:39:32 by ousmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	if (n == 0)
		return (0);
	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0' && x < (n - 1))
	{
		x++;
	}
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
