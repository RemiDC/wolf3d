#include "wolf3d.h"
#include "mlx.h"
#include "libft.h"


#include <stdio.h>

static void	waiting_instruction(t_env *env)
{
	t_win	*win;

	win = &(env->win);
	mlx_hook(WIN_PTR, 2, 0, deal_key, env);
	mlx_loop(MLX_PTR);
}

int			main(int argc, char **argv)
{
	t_env	env;

	env.map = parsing(read_file(argc, argv));
	init_mlx(&(env.win));
	ft_print_tab(env.map);
	env.cam = init_cam(env.map);
	raycasting(&(env.win), &(env.cam), env.map);
	put_image(&(env.win));
	waiting_instruction(&env);
	ft_tabdel_char(&(env.map));//free temporaire
	return (0);
}
