SRC_PLAY = playmusic.cpp
SRC_DECRYPT = decrypt.cpp

NAME_PLAY = play
NAME_DECRYPT = decrypt

CC = g++
LIB = -lreadline
CFLAGS = -Wall -Wextra -Werror -std=c++11 -g

all: ${NAME_PLAY} ${NAME_DECRYPT}

${NAME_PLAY}: ${SRC_PLAY}
	@${CC} ${CFLAGS} ${SRC_PLAY} -o ${NAME_PLAY} ${LIB}
	@echo "Compiled play"

${NAME_DECRYPT}: ${SRC_DECRYPT}
	@${CC} ${CFLAGS} ${SRC_DECRYPT} -o ${NAME_DECRYPT} ${LIB}
	@echo "Compiled decrypt"

clean:
	@rm -rf *.dSYM
	@echo "Cleaned"

fclean: clean
	@rm -f ${NAME_PLAY} ${NAME_DECRYPT}
	@echo "Removed executables"

re: clean all

.PHONY: all clean fclean re