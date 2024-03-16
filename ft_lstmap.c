/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:48:16 by oba               #+#    #+#             */
/*   Updated: 2024/03/16 17:25:26 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nouv_lst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	nouv_lst = ft_lstnew(f(lst->content));
	if (!nouv_lst)
		return (0);
	temp = nouv_lst;
	lst = lst->next;
	while (lst)
	{
		nouv_lst->next = ft_lstnew(f(lst->content));
		if (!nouv_lst->next)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		nouv_lst = nouv_lst->next;
		lst = lst->next;
	}
	nouv_lst->next = NULL;
	return (temp);
}
