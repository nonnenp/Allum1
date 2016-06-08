/*
** allum1.h for lol in /home/nonnen_p/CPE_2015_Allum1
** 
** Made by paul nonnenmacher
** Login   <nonnen_p@epitech.net>
** 
** Started on  Tue Feb 16 14:47:25 2016 paul nonnenmacher
** Last update Sat Feb 20 06:22:30 2016 paul nonnenmacher
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

# ifndef READ_SIZE
#  define READ_SIZE (1)
# endif /* !READ_SIZE */

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <time.h>

typedef struct  s_gnl
{
char          *str;
int           i;
}               t_gnl;

typedef struct	s_play
{
  char		*buffer;
  int		nb_line;
  int		nb_matches;
}		t_play;
/*
** get_next_line.c
*/

char    *get_next_line(const int fd);

/*
** my_print.c
*/

int	my_putchar(char);
int	my_putcharerror(char);
int	my_putstr(char * );
int	my_putstrerror(char *);
int	my_strlen(char *);

/*
** my_get_nbr.c
*/

int	my_getnbr(char *);

/*
** my_put_nbr.c
*/

int	my_put_nbr(int);

/*
**check .c
*/

int	check_line(int, int *);
int	check_match(int, int *, int);
void	aff_del(int, int);
int	is_over(int *);

/*
**player.c
*/

int	is_number(char *);
int	get_nb_line(int *, t_play *);
int	get_nb_matches(int *, t_play *);
int	play(int *, int);

/*
** allum1.c
*/

int	aff_game(int *);

/*
** ai.c
*/

int	ai(int *, int, int);

/*
** aff.c
*/

int	aff_all(int *);
int	aff_one(int *);
int	aff_two(int *);
int	aff_three(int *);
int	aff_four(int *);

#endif /* !ALLUM1_H_ */
