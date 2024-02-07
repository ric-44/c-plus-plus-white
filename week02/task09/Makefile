CXX=clang++
CXXFLAGS=-std=c++17 -Wall
SOURCES=main.cpp
EXECUTABLE=main

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)
