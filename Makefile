# Compilador y flags
CC = gcc
CFLAGS = -Wall -g

# Nombre del ejecutable
TARGET = app

# Archivos fuente
SRC = src/app.c src/file.c src/log.c src/main.c src/parameter.c src/ui.c src/header.c

# Regla principal
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) -lncurses

# Limpieza
clean:
	rm -f $(TARGET)
