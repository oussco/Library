/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 07:26:25 by oba               #+#    #+#             */
/*   Updated: 2024/01/17 12:58:51 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	while (s[x])
	{
		write(fd, &s[x], 1);
		x++;
	}
}

// int	main(void)
// {
// 	char	*str;
// 	int		fd;

// 	fd = open("/Users/ousmaneba/Documents/ousmanecursus42/Cursus/Libft/q.txt",
// 			O_WRONLY | O_CREAT | O_TRUNC, 0666);
// 	str = "Bonjour je suis un texte";

// 	ft_putstr_fd(str, fd);
// 	return (0);
// }
