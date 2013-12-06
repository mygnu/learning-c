CFILES  = program.c
OBJS    = object.o
EXEC    = program
DBFILE  = debugfile

CC      = gcc

CFLAGS  = -Wall
DFLAGS  = -Wall -ggdb
GFLAGS  = `pkg-config --cflags --libs gtk+-2.0`


$(EXEC): $(CFILES)
	$(CC) -o $(EXEC) $(CFILES) $(CFLAGS) $(GFLAGS)


.PHONY: r
r: $(EXEC)
	./$(EXEC)


.PHONY: d
d: $(CFILES)
	$(CC) $(DFLAGS) -o $(DBFILE) $(CFILES) $(GFLAGS)
	gdb $(DBFILE)


.PHONY: clean
clean:
	rm -f $(EXEC) $(DBFILE) *.o *~
