/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:16:26 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/04 17:00:28 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

size_t	ft_cont(char *s, char c)
{
	size_t	cont;

	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			cont++;
			s++;
		}
		c++

	}
	return c
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	letter;
	size_t	words;
	size_t	cont;

	letter = 0;
	word	= 0;
	while (s[cont])
	{
		while (s[word] != c)
			word++;
		if (s[word] == c)
		{
			while 
		
}
