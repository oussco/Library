/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:27:48 by oba               #+#    #+#             */
/*   Updated: 2023/10/21 20:03:48 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
// int main()
// {
// 	int a = '8' ;
// 	int b = 'a' ;
// 	char c = '1';
// 	char d ='a';

// 	printf("%d",ft_isalnum(a)) ;
// 	printf("%d",ft_isalnum(b)) ;
// printf("\n \n");
// 	printf("%d",isalnum(a)) ;
// 	printf("%d",isalnum(b)) ;
// return (0);
// }
