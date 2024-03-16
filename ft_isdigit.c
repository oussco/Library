/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:44:41 by oba               #+#    #+#             */
/*   Updated: 2023/10/22 12:01:51 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

// 	printf("%d",ft_isdigit(a)) ;
// 	printf("%d",ft_isdigit(b)) ;
// printf("\n \n");
// 	printf("%d",isdigit(a)) ;
// 	printf("%d",isdigit(b)) ;
// return (0);
// }
