SRC = ft_printf.c srcs/ft_printf_char.c srcs/ft_printf_str.c srcs/ft_printf_base.c srcs/ft_printf_nbr.c

INCLUDE		=	ft_print.h
OBG			= 	$(SRC:.c=.o)
NAME 		=	libftprintf.a
GFLAGS 		= 	-Wall -Wextra -Werror
CC 			=	 gcc
AR 			=	 ar -rc
RM  	    =    rm -rf


%.o : %.c 
	@$(CC) $(GFLAGS) -c $< -o $@ -I $(INCLUDE)  

$(NAME) : $(OBG)
	@$(AR) $(NAME) $(OBG)

all   : $(NAME) 1337_logo

clean : 
	@$(RM) $(OBG)
	@echo "\033[31mDELETE .O FILES🗑\033[0m"
fclean: clean
	@$(RM) $(NAME)

re    : fclean all

test  : 
	@echo "\033[92m TESTING IN PRORGRESS...✅\033[0m"
	@$(CC) ../main.c $(NAME)
	@./a.out || cat -e

1337_logo:

	@echo "\033[92m░░███╗░░██████╗░██████╗░███████╗\033[0m███╗░░░███╗███████╗██████╗░"
	@echo "\033[92m░████║░░╚════██╗╚════██╗╚════██║\033[0m████╗░████║██╔════╝██╔══██╗"
	@echo "\033[92m██╔██║░░░█████╔╝░█████╔╝░░░░██╔╝\033[0m██╔████╔██║█████╗░░██║░░██║"
	@echo "\033[92m╚═╝██║░░░╚═══██╗░╚═══██╗░░░██╔╝░\033[0m██║╚██╔╝██║██╔══╝░░██║░░██║"
	@echo "\033[92m███████╗██████╔╝██████╔╝░░██╔╝░░\033[0m██║░╚═╝░██║███████╗██████╔╝"
	@echo "\033[92m╚══════╝╚═════╝░╚═════╝░░░╚═╝░░░\033[0m╚═╝░░░░░╚═╝╚══════╝╚═════╝░"
	@echo "\033[92mCREATING .O FILES AND LIBFTPRINTF.A✅\033[0m"

.PHONY: all fclean clean test 1337_logo