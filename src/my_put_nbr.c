/*
** my_put_nbr.c for putnbr in /home/nonnen_p/Piscine_C_J03
** 
** Made by Paul NONNENMACHER
** Login   <nonnen_p@epitech.net>
** 
** Started on  Wed Sep 30 12:12:48 2015 Paul NONNENMACHER
** Last update Tue Feb 16 18:27:59 2016 paul nonnenmacher
*/

#include "allum1.h"

int	get_pow(int nb)
{
  int	pow;

  if (nb > 999999999)
    {
      pow = 1000000000;
      return (pow);
    }
  pow = 1;
  while (nb > 0)
    {
      nb = nb / 10;
      pow = pow * 10;
    }
  pow = pow / 10;
  return (pow);
}

void	is_easy(int nb)
{
  char	c;

  if (nb <= 9)
    {
      c = nb + 48;
      my_putchar(c);
    }
}

int	aff_neg(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  return (nb);
}

void	aff_nb(int nb, int stock)
{
  char	c;
  int	pow;

  pow = get_pow(nb);
  while (pow != 1)
    {
      stock = nb / pow;
      c = stock + 48;
      nb = nb - (stock * pow);
      pow = pow / 10;
      my_putchar(c);
      is_easy(nb);
    }
}

int	my_put_nbr(int nb)
{
  int	stock;

  stock = 0;
  if (nb == -2147483648)
    {
      write(1, "-2147483648", 11);
      return (0);
    }
  nb = aff_neg(nb);
  is_easy(nb);
  if (nb >= 9)
    aff_nb(nb, stock);
  return (0);
}
