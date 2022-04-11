/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:00:03 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/11 14:19:19 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	if (!lst)
		return ;
	while (*lst != NULL)
	{
		del(lst
		ft_lstdelone(content, lst->content);
		*lst = lst -> next;
	}
}
