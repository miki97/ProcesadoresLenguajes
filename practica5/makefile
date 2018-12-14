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
	gcc -c -o $@ $< $(INCLUDES) -g
	

$(OBJ)/main.o : $(SRC)/main.c
	gcc -c -o $@ $< -g

$(OBJ)/semantico.o: $(SRC)/semantico.c
	gcc -c -o $@ $< $(INCLUDES) -g

$(OBJ)/generacion.o: $(SRC)/generacion.c
	gcc -c -o $@ $< $(INCLUDES) -g
	
$(BIN)/sintactico :  $(OBJ)/semantico.o $(OBJ)/main.o $(OBJ)/generacion.o  $(OBJ)/y.tab.o
	gcc -o $@ $^ $(INCLUDES) -g

try2 : $(BIN)/sintactico $(SRC)/helloworld.ber
	$^ > 'output_simple.txt'

try : $(BIN)/sintactico $(SRC)/programaPrueba.ber
	# $^ > 'output.txt' 
	$^
gen : $(BIN)/sintactico $(SRC)/gencodigo1.ber
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
	rm -f -r $(SRC)/y.tab.h
	rm -f -r $(SRC)/y.tab.c
	rm -f -r $(SRC)/y.output
	rm -f -r $(OBJ)/*
	rm -f -r ./output.txt
	rm -f -r ./output_simple.txt

mrproper : clean
	rm -f -r $(BIN)/*
