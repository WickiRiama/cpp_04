# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 13:15:05 by mriant            #+#    #+#              #
#    Updated: 2022/11/29 18:02:20 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materias

SRCS = ${addprefix srcs/, \
	AMateria.cpp \
	Ice.cpp \
	Cure.cpp \
	Character.cpp \
	MateriaSource.cpp \
	main.cpp}

OBJS = ${SRCS:srcs/%.cpp=build/%.o}
DEPS = ${SRCS:srcs/%.cpp=build/%.d}

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
IFLAGS = -MMD -I./includes 
LFLAGS = 

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME} ${LFLAGS}

build/%.o: srcs/%.cpp
	mkdir -p build
	${CXX} ${CXXFLAGS} -c $< -o $@ ${IFLAGS}

.PHONY: all
all: ${NAME}

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -rf ${NAME}

.PHONY: re
re: fclean
	make -C .

-include ${DEPS}
