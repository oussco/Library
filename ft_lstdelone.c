/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:28:19 by oba               #+#    #+#             */
/*   Updated: 2024/03/15 17:01:36 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_lstdelone(t_list *lst, void (*del)(void
*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}
