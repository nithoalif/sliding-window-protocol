all: receiver transmitter

receiver:
	g++  -std=c++11 src/receiver.cpp src/crc8.cpp -o bin/receiver -lpthread

transmitter:
	g++ -std=c++11 src/transmitter.cpp src/crc8.cpp -o bin/transmitter -lpthread
