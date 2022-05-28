#Esta regla compila el programa principal
TARGET = TablasDeConversion
CFLAGS = -Wall
OBJS = TablasDeConversion.o Conversion.o
$(TARGET): $(OBJS)
	@gcc $(CFLAGS) $(OBJS) -o $(TARGET)
$(OBJ_DIR)\%.o : %.c
	gcc -c -MD $(CFLAGS) $(CPPFLAGS) $< -o $@

-include *.d
.PHONY: clean
clean:
	@rm -f *.o $(TARGET)