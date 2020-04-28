engine : main.o
	g++ main.o -o engine
main.o : main.cpp
	g++ -c main.cpp
run:  engine
	./engine
cleano:
	rm *.o
clean:
	make cleano
	rm engine
	