/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:22:37 by pcervill          #+#    #+#             */
/*   Updated: 2022/06/01 17:52:13 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	leaks(void)
{
	system("leaks -q so_long");
}

static void	init_struct(t_map *map, t_img *img)
{
	map->coin = 0;
	map->exit = 0;
	map->floor = 0;
	map->person = 0;
	map->wall = 0;
	map->xmax = 0;
	map->ymax = 0;
	img->h = 0;
	img->w = 0;
}

int	main(int argc, char *argv[])
{
	t_map	map;
	t_win	win;
	t_img	img;
	int		i;

	printf("comprobacion argumentos: %d\n", arg_ok(argc, argv[1]));
	init_struct(&map, &img);
	if (!arg_ok(argc, argv[1]))
		return (0);
	read_write_fdmap(argv[1], &map);
	if (!check_game_map(&map))
		return (0);
	new_window(&map, &win, &img);
	i = 0;
	printf("copia mapa: \n");
	while (map.map[i])
	{										
		printf("%s\n", map.map[i]);
		free(map.map[i]);
		i++;
	}										
	free(map.map);
	atexit(leaks);
}
