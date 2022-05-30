/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:22:37 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/30 13:29:05 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"
void	leaks(void)
{
	system("leaks -q so_long");
}

int	main(int argc, char *argv[])
{
	t_map	map;
	int		i;															//eliminar

	printf("comprobacion argumentos: %d\n", arg_ok(argc, argv[1]));		//eliminar
	if (!arg_ok(argc, argv[1]))
		return (0);
	read_write_fdmap(argv[1], &map);
	i = 0;																//eliminar
	printf("copia mapa: \n");											//eliminar
	while (map.map[i])													//eliminar
	{																	//eliminar
		printf("%s\n", map.map[i]);										//eliminar
/* 		free(map.map[i]);												//eliminar */
		i++;															//eliminar
	}																	//eliminar
/* 	free(map.map);														//eliminar */
	check_game_map(&map);
	printf("Nº de wall:	%d\n", map.wall);
	printf("Nº de coin:	%d\n", map.coin);
	printf("Nº de person:	%d\n", map.person);
	printf("Nº de floor:	%d\n", map.floor);
	printf("Nº de exit:	%d\n", map.exit);
	printf("Nº de ymax:	%d\n", map.ymax);
	printf("Nº de xmax:	%d\n", map.xmax);
	
	//system("leaks so_long");
	atexit(leaks);
}
