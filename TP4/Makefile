src = main.c pgcdSimple.c pgcdRec.c pgcdIter.c
obj = $(src:.c=.o)

LDFLAGS = 

all: main

main : $(obj)
	$(CC) -Wall -Wextra -std=c99 -lm -o $@ $^ $(LDFLAGS)

.PHONY: clean launch

clean:
	rm -f $(obj)

launch:
	clear;\
	make;\
	./main