/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:19:22 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/01 14:21:34 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
		return (NULL);
	cont = ft_strlen(s1);
	dst = malloc(sizeof(char) * cont);
	if (!dst)
		return (NULL);
	while (*s1 && )
		i = 0;
		while (*s1 == set[i])
		{
			s1++;
			i++;
		}
