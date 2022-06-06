/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:35:34 by pcervill          #+#    #+#             */
/*   Updated: 2022/06/06 19:05:48 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

/* void	close_game(t_map *map)
{
	free(map->map);
	mlx_destroy_window(win->mlx, win->mlx_win);
	exit (0);
} */

void	mov_left(t_map *map)
{
	if (map->map[map->xp][map->yp - 1] != '1')
	{
		if (map->map[map->xp][map->yp - 1] == 'C')
		{
			map->map[map->xp][map->yp - 1] = 'P';
			map->map[map->xp][map->yp] = '0';
			map->yp = map->yp - 1;
			map->coin--;
		}
	}
}

void	mov_down(t_map *map)
{
	if (map->map[map->xp + 1][map->yp] != '1')
	{
		if (map->map[map->xp + 1][map->yp] == 'C')
		{
			map->map[map->xp + 1][map->yp] = 'P';
			map->map[map->xp][map->yp] = '0';
			map->xp = map->xp + 1;
			map->coin--;
		}
	}
}

/* int	press(int keycode, t_map *map, t_win *win)
{
	printf("%d\n", keycode);
	if (keycode == ESC)
		close_game(map);
	if (keycode == A || keycode == LEFT)
	{
		mov_left(map);
	}
	else if (keycode == S || keycode == DOWN)
		mov_down();
	else if (keycode == D || keycode == RIGHT)
		mov_up();
	else if (keycode == W || keycode == UP)
		mov_rigth();
	create_image(map, win);
	return (0);
} */

int	press(int keycode, t_map *map)
{
	printf("%d\n", keycode);
	/* if (keycode == ESC)
		close_game(map); */
	if (keycode == A || keycode == LEFT)
	{
		mov_left(map);
	}
	else if (keycode == S || keycode == DOWN)
		mov_down(map);
	/*else if (keycode == D || keycode == RIGHT)
		mov_up();
	else if (keycode == W || keycode == UP)
		mov_rigth(); */
	create_image(map);
	return (0);
}
