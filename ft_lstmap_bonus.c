/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:50:25 by rbulanad          #+#    #+#             */
/*   Updated: 2023/01/09 11:24:37 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;

	if (!lst || !del || !*f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&newlst, tmp);
		lst = lst->next;
	}
	return (newlst);
}
