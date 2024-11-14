all:
	g++ main.cpp ServerClientInterface.cpp Errors.cpp DataReader.cpp User.cpp ./sha256/sha256.cpp -o server -lcryptopp

unit:
	g++ unit.cpp ServerClientInterface.cpp Errors.cpp DataReader.cpp User.cpp ./sha256/sha256.cpp -o unittest -lcryptopp -lUnitTest++ 

clean:
	rm -f server
