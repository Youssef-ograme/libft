NAME 	= 	libft.a
AR 		= 	ar rcs
CC		=	gcc
FLAGES	=	-Wall -Wextra -Werror
RM		=	rm -f


SRC_FONCT	=	$(wildcard src/src_fonct/*.c)
SRC_BONUS	=	$(wildcard src/src_bonus/*.c)


OBJ_FONCT = $(SRC_FONCT:%.c=%.o)
OBJ_BONUS = $(SRC_BONUS:%.c=%.o)


all:$(NAME)


$(NAME):$(OBJ_FONCT)
	$(AR) $@ $^


%.o:%.c
	$(CC) $(FLAGES) -c $< -o $@


bonus :all $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)


clean:
	$(RM) $(OBJ_FONCT) $(OBJ_BONUS)


fclean:clean
	$(RM) $(NAME)

.PHONY: all bonus clean fclean
