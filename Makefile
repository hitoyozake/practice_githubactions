CXX = g++
CXXFLAGS = -std=c++20 -Wall -O2

all: test

build:
	$(CXX) $(CXXFLAGS) src/modules/add.cpp tests/test_main.cpp -o test_runner

test: build
	./test_runner