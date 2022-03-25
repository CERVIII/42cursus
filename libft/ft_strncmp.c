/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:58:49 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/25 00:42:07 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (s1[cont] == s2[cont])
			cont++;
		else
			return ((int)s1[cont] - (int)s2[cont]);
	}
	return (0);
}
