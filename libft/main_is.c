/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:05:13 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/21 12:32:06 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);

int	main(void)
{
	int	c;
	int	c1;
	int	c2;
	int	c3;

	c = 50;
	c1 = 73;
	c2 = 160;
	c3 = 100;
	printf("Funcion original: %d\n", isascii(c));
	printf("Mi	funcion: %d\n", ft_isascii(c));
	printf("Funcion original: %d\n", isascii(c1));
	printf("Mi	funcion: %d\n", ft_isascii(c1));
	printf("Funcion original: %d\n", isascii(c2));
	printf("Mi	funcion: %d\n", ft_isascii(c2));
	printf("Funcion original: %d\n", isascii(c3));
	printf("Mi	funcion: %d\n", ft_isascii(c3));
}
