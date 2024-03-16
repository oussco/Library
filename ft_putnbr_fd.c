/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:29:31 by oba               #+#    #+#             */
/*   Updated: 2024/01/23 10:57:02 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		ft_putchar('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10 && n != -2147483648)
		ft_putchar(n + 48, fd);
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	y = open("/Users/ousmaneba/Documents/ousmanecursus42/Cursus/Libft/z.txt",
// 			O_WRONLY | O_CREAT | O_TRUNC, 0666);
// 	x = 125;

// 	ft_putnbr_fd(x, y);

// 	return (0);
// }