CC = gcc
CFLAGS = -Wall
SOURCES = CilindroRecto.c Circulo.c ConoCircularRecto.c Cuadrado.c Cubo.c Cuboide.c Esfera.c Main.c Paralelogramo.c PoligonoRegular.c Rectangulo.c Rombo.c Trapecio.c Triangulos.c
OBJECTS = $(SOURCES:.c=.o)
ASSEMBLY = $(SOURCES:.c=.s)
all: $(OBJECTS) $(ASSEMBLY)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
%.s: %.c
	$(CC) $(CFLAGS) -S $< -o $@
clean:
	rm -f $(OBJECTS) $(ASSEMBLY)