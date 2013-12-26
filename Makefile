CFILES  = aaprogram.c
OBJS    = object.o
EXEC    = app
DBFILE  = debugfile
AFILE   = assembly.asm

CC      = gcc

CFLAGS  = -Wall -Wno-unused-variable -Wno-unused-result -g -std=gnu11 -O3
DFLAGS  = -Wall -ggdb -std=gnu11 -O0
GFLAGS  = `pkg-config --cflags --libs gtk+-2.0`
AFLAGS  = -O2 -S -c --save-temps -masm=intel

$(EXEC): $(CFILES)
	$(CC) $(CFLAGS) -o $(EXEC) $(CFILES)  


.PHONY: r
r: $(EXEC)
	./$(EXEC)


.PHONY: d
d: $(CFILES)
	$(CC) $(DFLAGS) -o $(DBFILE) $(CFILES) 
	gdb $(DBFILE)

.PHONY: a
a:	$(CFILES)
	$(CC) $(AFLAGS) -o $(AFILE) $(CFILES)

.PHONY: clean
clean:
	rm -f $(EXEC) $(DBFILE) *.o *~ *.asm *.s *.out
