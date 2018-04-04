clientRun: main.o validation.o
	g++ -std=c++11 main.o validation.o -o clientRun

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

validation.o: validation.cpp
	g++ -c -std=c++11 validation.cpp

clean:
	rm *.o clientRun
