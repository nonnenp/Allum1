/*
** allum1.c for allum1 in /home/nonnen_p/CPE_2015_Allum1
** 
** Made by paul nonnenmacher
** Login   <nonnen_p@epitech.net>
** 
** Started on  Tue Feb 16 14:50:02 2016 paul nonnenmacher
** Last update Sat Feb 20 06:20:02 2016 paul nonnenmacher
*/

#include "allum1.h"

int	*fill_map(int *map)
{
  map[0] = 1;
  map[1] = 3;
  map[2] = 5;
  map[3] = 7;
  map[4] = -1;
  return (map);
}

int	aff_game(int *map)
{
  if ((my_putstr("*********\n")) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  aff_all(map);
  if ((my_putstr("*********\n")) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}

int	main()
{
  int	*map;

  if ((map = malloc(sizeof(int) * 5)) == NULL)
    return (EXIT_FAILURE);
  map = fill_map(map);
  if ((aff_game(map)) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  if ((play(map, 0)) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}
