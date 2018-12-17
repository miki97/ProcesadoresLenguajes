# Makefile

.PHONY : all gen0 gen0txt gen1 gen1txt gen2 gen2txt gen3 gen3txt genFULL genFULLtxt compile try clean clean_temp clean_gen mrproper

BER = ./ber
SRC = ./src
INC = ./include
OBJ = ./obj
BIN = ./bin
GEN = ./gen

INCLUDES = -I$(INC)


#**************************COMPILACIÓN**************************#
all : $(BIN)/compiler

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
	
$(BIN)/compiler :  $(OBJ)/main.o $(OBJ)/y.tab.o $(OBJ)/semantico.o $(OBJ)/generacion.o 
	gcc -o $@ $^ $(INCLUDES) -g


#***************************GENERACIÓN***************************#
gen0 : $(BIN)/compiler $(BER)/helloworld.ber
	$^

gen0txt : $(BIN)/compiler $(BER)/helloworld.ber
	$^ > output_simple.txt

gen1 : $(BIN)/compiler $(BER)/gencodigo1.ber
	$^

gen1txt : $(BIN)/compiler $(BER)/gencodigo1.ber
	$^ > output_gen1.txt

gen2 : $(BIN)/compiler $(BER)/gencodigo2.ber
	$^

gen2txt : $(BIN)/compiler $(BER)/gencodigo2.ber
	$^ > output_gen2.txt

gen3 : $(BIN)/compiler $(BER)/gencodigoFOR.ber
	$^

gen3txt : $(BIN)/compiler $(BER)/gencodigoFOR.ber
	$^ > output_gen3.txt

genFULL : $(BIN)/compiler $(BER)/programaPrueba.ber
	$^

genFULLtxt : $(BIN)/compiler $(BER)/programaPrueba.ber
	$^ > output_genFULL.txt

genLista : $(BIN)/compiler $(BER)/gencodigoLista.ber
	$^
genListatxt : $(BIN)/compiler $(BER)/gencodigoLista.ber
	$^ > output_genLISTA.txt

genFib : $(BIN)/compiler $(BER)/fibonachi.ber
	$^	
genFibtxt : $(BIN)/compiler $(BER)/fibonachi.ber
	$^ > output_genFIBONACHI.txt
#***************************C_COMPIL***************************#
compile : $(GEN)/generado.c
	gcc $^ -o $(BIN)/generado 


#***************************PRUEBA_FINAL***************************#
try : $(BIN)/generado
	$^


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

clean_temp : 
	rm -f -r $(GEN)/temp.c

clean_gen : clean_temp
	rm -f -r $(GEN)/dec_fun.c
	rm -f -r $(GEN)/generado.c

mrproper : clean clean_gen
	rm -f -r $(BIN)/*
