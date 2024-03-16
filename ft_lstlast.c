/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:35:52 by oba               #+#    #+#             */
/*   Updated: 2024/03/15 20:56:20 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*newlst;

	if (!lst)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		if (lst->next != NULL)
			lst = lst->next;
		else
		{
			newlst = lst;
			return (newlst);
		}
	}
	return (NULL);
}
