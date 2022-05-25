/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:22:37 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/25 20:09:52 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char *argv[])
{
	t_map	map;
	int		i;															//eliminar

	printf("comprobacion argumentos: %d\n", arg_ok(argc, argv[1]));		//eliminar
	if (arg_ok(argc, argv[1]) == 0)
		return (0);
	read_write_fdmap(argv[1], &map);
	i = 0;																//eliminar
	printf("copia mapa: \n");											//eliminar
	while (map.map[i])													//eliminar
	{																	//eliminar
		printf("%s\n", map.map[i]);										//eliminar
		i++;															//eliminar
	}																	//eliminar
	check_game_map(&map);
	system("leaks so_long");
}

/* int	main(int argc, char *argv[])
{
	t_map	map;
	int		i;

	printf("comprobacion argumentos: %d\n", arg_ok(argc, argv[1]));
	i = 0;
	read_write_fdmap(argv[1], &map);
	printf("copia mapa: \n");
	while (map.map[i])
	{
		printf("%s\n", map.map[i]);
		i++;
	}
	return (0);
} */
