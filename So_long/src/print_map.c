/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:45:07 by pcervill          #+#    #+#             */
/*   Updated: 2022/06/01 17:56:53 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static char	*condition_print(int x, int y)
{
	t_map	map;

	if (map.map[x][y] == '1')
		return (ft_strdup("WL"));
	else if (map.map[x][y] == 'C')
		return (ft_strdup("CO"));
	else if (map.map[x][y] == 'P')
		return (ft_strdup("PJ"));
	else if (map.map[x][y] == 'E')
		return (ft_strdup("EX"));
	return (NULL);
}

static void	put_image(t_img *img, t_win *win, int x, int y)
{
	win->img = mlx_xpm_file_to_image(win->mlx, condition_print(x, y),
			&img->w, &img->h);
	mlx_put_image_to_window(win->mlx, win->mlx_win,
		win->img, y * 56, x * 56);
}

static void	create_image(t_map	*map, t_win *win, t_img *img)
{
	int	x;
	int	y;

	x = 0;
	while (map->map[x])
	{
		y = 0;
		while (map->map[x][y])
		{
			win->img = mlx_xpm_file_to_image(win->mlx, FL, &img->w,
					&img->h);
			mlx_put_image_to_window(win->mlx, win->mlx_win,
				win->img, y * 56, x * 56);
			printf("1");
			put_image(img, win, x, y);
			y++;
		}
		x++;
	}
}

void	new_window(t_map *map, t_win *win, t_img *img)
{
	win->mlx = mlx_init();
	win->mlx_win = mlx_new_window(win->mlx, map->ymax * 56,
			map->xmax * 56, "so_long");
	create_image(map, win, img);
	mlx_loop(win->mlx);
}
