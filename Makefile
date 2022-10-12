SRC = ft_printf.c srcs/ft_printf_char.c srcs/ft_printf_str.c srcs/ft_printf_base.c

INCLUDE		=	ft_print.h
OBG			= 	$(SRC:.c=.o)
NAME 		=	libftprintf.a
GFLAGS 		= 	-Wall -Wextra -Werror
CC 			=	 gcc
AR 			=	 ar -rc
RM  	    =    rm -rf


%.o : %.c 
	$(CC) $(GFLAGS) -c $< -o $@ -I $(INCLUDE)  

$(NAME) : $(OBG)
	$(AR) $(NAME) $(OBG)

all : $(NAME)

clean : 
	$(RM) $(OBG)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all fclean clean