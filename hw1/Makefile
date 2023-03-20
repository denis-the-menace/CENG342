TARGET=20050111060
CC=gcc
CFLAGS=-I$(IDIR)

IDIR=include
SRCDIR=src
OBJDIR=src/obj

_DEPS = hellomake.h randomMatrixMultiplication.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = 20050111060.o hellofunc.o randomMatrixMultiplication.o
OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJDIR)/*.o *~ core $(INCDIR)/*~ 
