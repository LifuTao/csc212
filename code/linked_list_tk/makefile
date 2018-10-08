
# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o node.o
	$(CXX) $(CXXFLAGS) -o main main.o node.o

# The main.o target can be written more simply

main.o: main.cpp node.h
	$(CXX) $(CXXFLAGS) -c main.cpp

node.o: node.h
