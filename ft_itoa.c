/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:35:27 by oba               #+#    #+#             */
/*   Updated: 2024/03/12 20:06:36 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countlong(int x)
{
	int	y;

	y = 0;
	if (x < 0)
	{
		y++;
		x = -x;
	}
	while (x / 10)
	{
		y++;
		x = x / 10;
	}
	y++;
	return (y);
}

char	*ft_itoa(int n)
{
	char	*nombre;
	long	x;
	long	y;
	int		longueur;

	x = n;
	y = n;
	longueur = countlong(x);
	if (!longueur)
		return (NULL);
	nombre = malloc(sizeof(char) * (longueur + 1));
	if (!nombre)
		return (NULL);
	nombre[longueur] = '\0';
	if (y < 0)
		y = -y;
	while (longueur > 0)
	{
		longueur--;
		nombre[longueur] = (y % 10) + '0';
		y = y / 10;
	}
	if (x < 0)
		nombre[0] = '-';
	return (nombre);
}

// int	main(void)
// {
// 	char	*ans;
// 	int		numb;

// 	numb = -2147483648;

// 	ans = ft_itoa(numb);
// 	printf("%s", ans);
// 	free(ans);
// }