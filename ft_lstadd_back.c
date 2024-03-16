/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:54:19 by oba               #+#    #+#             */
/*   Updated: 2024/03/15 16:36:08 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cpy;

	cpy = *lst;
	if (!cpy)
	{
		*lst = new;
		return ;
	}
	while (cpy)
	{
		if (cpy->next == NULL)
		{
			cpy->next = new;
			return ;
		}
		else
			cpy = cpy->next;
	}
}
