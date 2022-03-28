/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:19:29 by pcervill          #+#    #+#             */
/*   Updated: 2022/03/28 23:43:20 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;
	int	c1;

	c = 'a';
	c1 = 'a';
	printf("\n---------FUNCION TOUPPER----------\n");
	printf("Funcion original: %c\n", toupper(c));
	printf("Mi	 funcion: %c\n", ft_toupper(c1));
	printf("-----------------FIN----------------\n");
	printf("\n---------FUNCION TOUPPER----------\n");
	printf("Funcion original: %c\n", tolower(c));
	printf("Mi	 funcion: %c\n", ft_tolower(c1));
	printf("-----------------FIN----------------\n");
}
