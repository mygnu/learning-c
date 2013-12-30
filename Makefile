CFILES  = aaprogram.c myfun.c
OBJS    = object.o
EXEC    = app
DBFILE  = debugfile
AFILE   = assembly.asm

CC      = gcc

CFLAGS  = -Wall -Wno-unused-variable -Wno-unused-result -g -std=gnu99 -O3
FFLAGS	= -Wall -std=gnu99
DFLAGS  = -Wall -ggdb -std=gnu99 -O0
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


check-syntax:
	gcc $(FFLAGS) $(GFLAGS) -o nul -S ${CHK_SOURCES}

.PHONY: clean
clean:
	rm -f $(EXEC) $(DBFILE) *.o *~ *.asm *.s *.out






