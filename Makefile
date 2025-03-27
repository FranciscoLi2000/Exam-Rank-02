NAME = mis_funciones
CC = cc  # Usar `gcc` en lugar de `CC`, ya que `CC` podría referirse a un compilador C++ en algunos sistemas.
CFLAGS = -Wall -Wextra -Werror
AR = ar  # Comando para crear librerías estáticas
ARFLAGS = rcs  # Flags para `ar`

source = $(wildcard *.c)
object = $(patsubst %.c,%.o, $(source))

all: $(NAME)

$(NAME): $(object)
	$(AR) $(ARFLAGS) $(NAME) $(object)
# Genera la librería estática

%.o: %.c Makefile *.c
	$(CC) -c $(CFLAGS) $< -o $@
# Asegura la salida correcta de archivos `.o`

clean:
	rm -f *.o
# Evita el uso peligroso de `rm -r`

fclean: clean
	rm -f $(NAME)
# `rm -f` es más seguro

re: fclean all

.PHONY: all clean fclean re
