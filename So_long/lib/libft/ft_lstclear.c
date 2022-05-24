/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:00:03 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/13 13:04:44 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*next;
	if (!lst)
		return ;
	while (*lst)
	{
		next = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	lst = NULL;
}
