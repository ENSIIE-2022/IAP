#Théo SZATKOWSKI
but: all

CC = gcc -Wall -Wextra -std=c99

all : main_rec main_iter

fact_iter.o : fact_iter.c

fact_rec.o : fact_rec.c

main.o : main.c

main_rec : main.o fact_rec.o
	$(CC) -o $@ $^

main_iter : main.o fact_iter.o
	$(CC) -o $@ $^ 

clean:
	rm *.o