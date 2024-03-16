/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:04:49 by oba               #+#    #+#             */
/*   Updated: 2023/10/31 10:59:15 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	val;
	int	sign;

	sign = 1;
	val = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		val *= 10;
		val += *str - '0';
		str ++;
	}
	return (val * sign);
	return (0);
}
// #include <stdlib.h>
// int main()
// {
// char *str =" 	   	 	+2145582f";

// printf("%d \n",ft_atoi(str));
// printf("%d",atoi(str));
// return (0);
// }