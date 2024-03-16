/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:59:06 by oba               #+#    #+#             */
/*   Updated: 2024/03/15 16:36:28 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//void	test(unsigned int a, char *b)
//{
//	char	lettre;
//
//	lettre = *b;
//	if (lettre == 'b')
//		printf("%c, %i\n", lettre, a);
//}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	x;

	x = 0;
	while (s[x])
	{
		(*f)(x, &s[x]);
		x++;
	}
}

//int	main(void)
//{
//	char	alpha[] = "ousmousse";
//	ft_striteri(alpha,test);
//}
