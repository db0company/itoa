##
## Made by	db0
## Contact	db0company@gmail.com
## Website	http://db0.fr/
##

# main
NAME		=	itoa

# sources & objects
SRC_DIR		=	src/

SRCS		=	$(SRC_DIR)nbrlen.c				\
			$(SRC_DIR)$(NAME).c				\
			$(SRC_DIR)$(NAME)dup.c

OBJ		=	$(SRCS:.c=.o)

# include
INCLUDE		=	-Iinclude

# compilation
CC		?=	gcc
CFLAGS		+=	-W -Wall -ansi -pedantic

# commands
AR		=	ar r
RM		=	rm -f

## RULES
all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(AR) lib$(NAME).a $(OBJ)
			ranlib lib$(NAME).a

.c.o		:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INCLUDE)

# clean
clean		:
			$(RM) $(OBJ)

fclean		:	clean
			$(RM) lib$(NAME).a

# re
re		:	fclean all
