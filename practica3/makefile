# Makefile

.PHONY : all clean mrproper

SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./obj

INCLUDES = -I$(INC)


#**************************COMPILACIÓN**************************#
all : $(BIN)/sintactico

$(SRC)/lex.yy.c : $(SRC)/lexico.l
	lex -o $@ $<

$(SRC)/y.tab.c : $(SRC)/sintactico.y $(SRC)/lex.yy.c
	bison -d -v -o $@ $< 

$(OBJ)/y.tab.o : $(SRC)/y.tab.c 
	gcc -c -o $@ $<

$(OBJ)/main.o : $(SRC)/main.c
	gcc -c -o $@ $<

$(BIN)/sintactico : $(OBJ)/main.o $(OBJ)/y.tab.o
	gcc -o $@ $^

try2 : $(BIN)/sintactico $(SRC)/helloworld.ber
	$^ > output_simple.txt

try : $(BIN)/sintactico $(SRC)/programaPrueba.ber
	$^ 

ctry: $(BIN)/sintactico $(SRC)/programaPrueba.ber
	make clean
	clear
	$^ > output.txt 

	
#***************************LIMPIEZA***************************#
clean :
	rm -f -r *~
	rm -f -r $(SRC)/*~
	rm -f -r $(SRC)/lex.yy.c
	rm -f -r $(SRC)/y.tab.c
	rm -f -r $(SRC)/y.output
	rm -f -r $(OBJ)/*
	rm -f -r ./output.txt
	rm -f -r ./output_simple.txt

mrproper : clean
	rm -f -r $(BIN)/*
