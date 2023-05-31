SRC_PLAY = playmusic.cpp
SRC_LEETFIND = leetfind.cpp

NAME_PLAY = fgses
NAME_LEETFIND = leetfind

CC = g++
LIB = -lreadline
CFLAGS = -Wall -Wextra -Werror -std=c++11 -g

all: ${NAME_PLAY} ${NAME_LEETFIND}

${NAME_PLAY}: ${SRC_PLAY}
	@${CC} ${CFLAGS} ${SRC_PLAY} -o ${NAME_PLAY} ${LIB}
	@echo "Compiled fgses"

${NAME_LEETFIND}: ${SRC_LEETFIND}
	@${CC} ${CFLAGS} ${SRC_LEETFIND} -o ${NAME_LEETFIND} ${LIB}
	@echo "Compiled leetfind"

clean:
	@rm -rf *.dSYM
	@echo "Cleaned"

fclean: clean
	@rm -f ${NAME_PLAY} ${NAME_LEETFIND}
	@echo "Removed executables"

re: clean all

.PHONY: all clean fclean re