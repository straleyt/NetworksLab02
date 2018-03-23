serverRun: server.o clientAccount.o
	g++ -std=c++11 server.o clientAccount.o -o serverRun

server.o: server.cpp
	g++ -std=c++11 -c server.cpp

clientAccount.o: clientAccount.cpp clientAccount.h
	g++ -std=c++11 -c clientAccount.cpp

clean:
	rm *.o serverRun
