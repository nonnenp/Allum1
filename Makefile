##
## Makefile for lol in /home/nonnen_p/CPE_2015_Allum1
## 
## Made by paul nonnenmacher
## Login   <nonnen_p@epitech.net>
## 
## Started on  Tue Feb 16 14:21:36 2016 paul nonnenmacher
## Last update Wed Jun  8 18:09:09 2016 paul nonnenmacher
##

CC	= cc -W -Wall -Wextra -Werror -ansi -pedantic -I include/

SRC	= src/allum1.c\
	  src/my_print.c\
	  src/my_getnbr.c\
	  src/my_put_nbr.c\
	  src/player.c\
	  src/get_next_line.c\
	  src/check.c\
	  src/ai.c\
	  src/aff.c\

OBJ	= $(SRC:.c=.o)

NAME	= allum1

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

cl: all clean
