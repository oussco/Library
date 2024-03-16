/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:19:22 by oba               #+#    #+#             */
/*   Updated: 2023/10/31 12:19:04 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i + 1 < (dstsize))
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize)
		dst[i] = '\0';
	return (count);
}

// int	main(void)
// {
// char a[] = "bonour mom";
// char b[] = "hello ous";

// strlcpy(b,a,10);
// ft_strlcpy(a,b,10);
// printf("%s",b);
// return (0);
// }