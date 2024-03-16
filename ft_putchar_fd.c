/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:26:37 by oba@student.42qu  #+#    #+#             */
/*   Updated: 2024/01/17 18:52:41 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
//     int f;

// f = open("/Users/ousmaneba/Documents/ou
// smanecursus42/Cursus/Libft/z.txt", 
// O_WRONLY | O_CREAT | O_TRUNC, 0666);
//     ft_putchar_fd('A',f);

// return (0);
// }