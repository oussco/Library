/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:00:06 by oba               #+#    #+#             */
/*   Updated: 2023/10/22 12:01:45 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	a;

// 	a = 125;
// 	printf("%d", f	_isascii(a));
// 	printf("\n");
// 	printf("%d",isascii(a));
// 	return (0);
// }
// int main() {  
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);  
//     // %d displays the integer value of a character
//     // %c displays the actual character
//     printf("ASCII value of %c = %d", c, c);
//     return 0;
// }