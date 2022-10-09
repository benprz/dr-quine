#MAKEFLAGS += --silent

CC = gcc
CFLAGS = -Wall -Wextra -Werror 

SRC = Colleen.c Grace.c Sully.c
OUTPUT = $(SRC:%.c=%)

.PHONY : all clean fclean re

all: $(OUTPUT)

Colleen: Colleen.o
Grace: Grace.o
Sully: Sully.o

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(OUTPUT)

re: 
	$(MAKE) fclean
	$(MAKE) all
