all: client

client: client.o set.o
	g++ -o client client.o set.o

client.o: client.cpp set.h
	g++ -c client.cpp

set.o: set.cpp set.h
	g++ -c set.cpp

clean:
	rm -Rf *.o client
