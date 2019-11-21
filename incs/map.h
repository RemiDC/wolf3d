#ifndef MAP_H
# define MAP_H

# define CELL_SIZE 32
# define CELL_NB 3
# define MAP_POS 15
# define MAP_SIZE ((CELL_SIZE + 1) * (CELL_NB * 2 + 1) - CELL_NB * 2)

int		give_color(char **map, int x, int y);
void	put_player(t_win *win);
void	bresenham(t_win *win, double p1[2], double p2[2]);
void	big_map(t_win *win, t_cam *cam, char **map);
void	put_fov(t_win *win, t_cam *cam, int x, int y);
bool	in_circle(int x, int y);

#endif
