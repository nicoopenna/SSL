#Esta regla compila el programa principal
# Esto se me quedo obsoleto, por lo que vi hasta ahora no encontre manera de que haya varios target utilizando variables
# Queda pendiente resolverlo pero paso a la solucion que esta en las referencias del profesor
# TARGET = TablasDeConversion
# CFLAGS = -Wall
# OBJS = TablasDeConversion.o Conversion.o
# $(TARGET): $(OBJS)
#	@gcc $(CFLAGS) $(OBJS) -o $(TARGET)
#%.o : %.c
#	gcc -c -MD $(CFLAGS) $(CPPFLAGS) $< -o $@

#-include *.d
#.PHONY: clean
#clean:
#	@rm -f *.o $(TARGET)
#Nueva regla que genera ambos exes
all: TablasDeConversion ConversionTest
CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 
#Genera las tablas de conversion
TablasDeConversion: TablasDeConversion.o Conversion.o
	@gcc TablasDeConversion.o Conversion.o -o TablasDeConversion $(CFLAGS)
#Genera los tests
ConversionTest: ConversionTest.o Conversion.o
	@gcc ConversionTest.o Conversion.o -o ConversionTest $(CFLAGS)
#Objetos
TablasDeConversion.o: TablasDeConversion.c Conversion.h
	@gcc -c TablasDeConversion.c -o TablasDeConversion.o $(CFLAGS)

Conversion.o: Conversion.c Conversion.h
	@gcc -c Conversion.c -o Conversion.o $(CFLAGS)

ConversionTest.o: ConversionTest.c Conversion.h
	@gcc -c ConversionTest.c -o ConversionTest.o $(CFLAGS)
#Clean para que quede todo actualizado
.PHONY: clean
clean:
	@rm -f *.o ConversionTest.exe TablasDeConversion.exe
	