/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:16:26 by pcervill          #+#    #+#             */
/*   Updated: 2022/04/04 22:04:24 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

size_t	ft_cstring(char const *s, char c)
{
	size_t	cont;
	size_t	i;
	
	cont = 0;
	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			cont++;
		}
		s++;
	}
	return (cont);
}

size_t	ft_cchar(char const *s, char c)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != c && s[cont])
		cont++;
	return (cont); 
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	cstr;
	size_t	cont;
	size_t	cchar;

	cstr = ft_cstring(s, c);
	str = (char **)ft_calloc(sizeof (char), cstr + 1);
	if (!str)
		return (0);
	cont = 0;
	while (cont < cstr)
	{
		while (*s == c)
			s++;
		cchar = ft_cchar(s, c);
		str[cont] = (char *)ft_calloc(sizeof (char), cchar + 1);
		ft_strlcpy(str[cont], s, cchar);
		cont++;
	}
	str = '\0';
	return (str);
}
