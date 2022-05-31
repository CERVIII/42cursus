/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:40:40 by pcervill          #+#    #+#             */
/*   Updated: 2022/05/31 13:12:24 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	cont_sprite(t_map *map, int x, int y)
{
	if (map->map[x][y] == '1')
		map->wall++;
	else if (map->map[x][y] == 'C')
		map->coin++;
	else if (map->map[x][y] == 'P')
		map->person++;
	else if (map->map[x][y] == '0')
		map->floor++;
	else if (map->map[x][y] == 'E')
		map->exit++;
}

int	check_size_map(t_map *map)
{
	char	**aux;

	aux = map->map;
	map->ymax = ft_strlen(aux[0]);
	map->xmax = 0;
	while (aux[map->xmax] && map->ymax == (int) ft_strlen(aux[map->xmax]))
		map->xmax++;
	return (!(aux[map->xmax]));
}

int	check_game_map(t_map *map)
{
	int		x;
	int		y;
	char	**aux;

	aux = map->map;
	if (check_size_map(map) == 0)
		return (0);
	x = 0;
	while (aux[x])
	{
		y = 0;
		while (aux[x][y])
		{
			cont_sprite(map, x, y);
			if (aux[0][y] != '1' || aux[map->xmax - 1][y] != '1' || aux[x][0] != '1'
				|| aux[x][map->ymax - 1] != '1')
				return (0);
			y++;
		}
		x++;
	}
	if (map->coin < 1 || map->exit < 1 || map->person < 1)
		return (0);
	return (1);
}