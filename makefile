# Makefile para o Laboratorio 2 (Funcionarios e Empresas)
# Baseado no exemplo MakeFile das aulas do professor Sílvio Costa Sampaio
# https://github.com/imdcode/makeaula

CC = g++

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG = $(BIN)/mainRun

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/funcionario.o $(OBJ)/empresa.o $(OBJ)/main.o


all: mkdirs $(PROG)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(PROG)

$(OBJ)/funcionario.o: $(SRC)/funcionario.cpp $(INC)/funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $(OBJ)/funcionario.o

$(OBJ)/empresa.o: $(SRC)/empresa.cpp $(INC)/empresa.h
	$(CC) $(CPPFLAGS) -c $(SRC)/empresa.cpp -o $(OBJ)/empresa.o

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

