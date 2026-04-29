CXX = g++
TARGET = programa

build:
	g++ main.cpp -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)

Agrego el Make File
