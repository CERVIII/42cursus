/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:48:40 by pcervill          #+#    #+#             */
/*   Updated: 2022/06/01 13:16:41 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#define MLX_SYNC_IMAGE_WRITABLE		1
#define MLX_SYNC_WIN_FLUSH_CMD		2
#define MLX_SYNC_WIN_CMD_COMPLETED	3

#define PJ "./Sprites/Pacman_HD.xpm"
#define CO "./Sprites/coin.xpm"
#define EX "./Sprites/portal_close.xpm"
#define FL "./Sprites/floor1.xpm"
#define WL "./Sprites/wall.xpm"

int	main(void)
{
	void	*mlx;
	void	*img;
	void	*mlx_win;
	int		a = 0;
	int		b = 0;
	int		x = 0;
	int		y = 0;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 24 * 56, 1080, "Prueba");
	img = mlx_xpm_file_to_image(mlx, FL, &a, &b);
	while (x * 56 < 1080)
	{
		y = 0;
		while (y * 56 < 1920)
		{
			mlx_put_image_to_window(mlx, mlx_win, img, y * 56, x * 56);
			y++;
		}
		x++;
	}
	img = mlx_xpm_file_to_image(mlx, WL, &a, &b);
	x = 0;
	while (x < 1080)
	{
		if (x == 0 || y == 0)
		mlx_put_image_to_window(mlx, mlx_win, img, x * 56, 0 * 56);
		mlx_put_image_to_window(mlx, mlx_win, img, x * 56, 2 * 56);
		x++;
	}
	img = mlx_xpm_file_to_image(mlx, PJ, &a, &b);
	mlx_put_image_to_window(mlx, mlx_win, img, 0 * 56, 1 * 56);
	img = mlx_xpm_file_to_image(mlx, EX, &a, &b);
	mlx_put_image_to_window(mlx, mlx_win, img, 10 * 56, 1 * 56);
	img = mlx_xpm_file_to_image(mlx, CO, &a, &b);
	mlx_put_image_to_window(mlx, mlx_win, img, 1 * 56, 1 * 56);
	mlx_put_image_to_window(mlx, mlx_win, img, 2 * 56, 1 * 56);
	mlx_put_image_to_window(mlx, mlx_win, img, 3 * 56, 1 * 56);
	mlx_put_image_to_window(mlx, mlx_win, img, 4 * 56, 1 * 56);
	mlx_put_image_to_window(mlx, mlx_win, img, 5 * 56, 1 * 56);
	mlx_loop(mlx);
}
