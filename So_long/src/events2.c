/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:11:32 by pcervill          #+#    #+#             */
/*   Updated: 2022/06/08 17:39:18 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	close_game(t_map *map)
{
	free(map->map);
	mlx_destroy_window(map->mlx, map->mlx_win);
	exit (0);
}

void	coins(t_map *map)
{
	map->coin--;
	printf("%sCOGISTE UNA MONEDA, %sTE FALTAN: %d\n%s", GREEN,
		MAGENT, map->coin, NORMAL);
	if (map->coin == 0)
	{
		printf("%sMONEDAS RECOGIDAS, BUSCA LA SALIDA\n%s", BLUE, NORMAL);
	}
}
