CFILES  = aaprogram.c
OBJS    = object.o
EXEC    = app
DBFILE  = debugfile

CC      = gcc

CFLAGS  = -Wall
DFLAGS  = -Wall -ggdb
GFLAGS  = `pkg-config --cflags --libs gtk+-2.0`


$(EXEC): $(CFILES)
	$(CC) $(CFLAGS) -o $(EXEC) $(CFILES)  


.PHONY: r
r: $(EXEC)
	./$(EXEC)


.PHONY: d
d: $(CFILES)
	$(CC) $(DFLAGS) -o $(DBFILE) $(CFILES) 
	gdb $(DBFILE)


.PHONY: clean
clean:
	rm -f $(EXEC) $(DBFILE) *.o *~
