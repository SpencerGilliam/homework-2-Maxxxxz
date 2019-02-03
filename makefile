#
#	Michael Cooper
#	CS3560 Ohio University
#	Project 1 makefile
#

COMP = g++

prog1: replace.a main.o
	$(COMP) -o prog1 main.o lib/replace.a
	rm *.o

main.o: replace.a
	$(COMP) -c src/main.cpp 

replace.a: replace.o 
	ar rcs lib/replace.a replace.o

replace.o:
	$(COMP) -I ./include -c src/replace.cpp

clean:
	rm prog1
