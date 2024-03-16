/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:36:23 by oba               #+#    #+#             */
/*   Updated: 2024/03/12 15:55:32 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c +32);
	return (c);
}
// int	main(void)
// {
// 	char	a= 's';

// printf("%d",tolower(a));
// printf("\n");
// printf("%d",ft_tolower(a));
// return (0);
// }
