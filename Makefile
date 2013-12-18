CFILES  = aaprogram.c
OBJS    = object.o
EXEC    = app
DBFILE  = debugfile

CC      = gcc

CFLAGS  = -Wno-unused-variable -Wall -g --std=gnu11 -O3
DFLAGS  = -Wall -ggdb -O0
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
