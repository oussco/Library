/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:27:37 by oba               #+#    #+#             */
/*   Updated: 2023/12/15 14:08:22 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*nul;

	nul = NULL;
	while (*str)
	{
		if (*str == (char)c)
			nul = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)nul);
}
