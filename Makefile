##
## EPITECH PROJECT, 2020
## 203hotline
## File description:
## makefile
##

SRC	=	main.cpp	\

OBJ	=	$(SRC:.cpp=.o)

NAME	=	203hotline

CFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME) message

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(CFLAGS) -lm -I ./include

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "Successfully compiled!"
