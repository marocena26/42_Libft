CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

COMPILE = ${CC} ${CFLAGS}

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c

OBJ = ${SRC:%.c=%.o} 

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

%.o: %.c
	$(COMPILE) -c $< -o $@

# Cleaning

clean:
	@echo Limpiando los .o ...
	@rm -f ${OBJ}
	@echo OK

