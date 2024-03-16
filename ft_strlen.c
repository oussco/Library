/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:47:36 by oba               #+#    #+#             */
/*   Updated: 2023/10/31 11:00:21 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *src)
{
	unsigned long	retour;

	retour = 0 ;
	while (src[retour] != '\0')
	{
		retour++;
	}
	return (retour);
}

// int	main(void)
// {
// char	a[80] = "123456789123456789123456789";

// printf("%lu",strlen(a));
// printf("\n");
// printf("%lu",ft_strlen(a));
// return (0);
// }