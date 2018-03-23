clientRun: main.o Utilities.o
	g++ -std=c++11 main.o Utilities.o -o clientRun

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

Utilities.o: Utilities.cpp
	g++ -c -std=c++11 Utilities.cpp

clean:
	rm *.o clientRun
