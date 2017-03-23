all:
	$(CXX) -std=c++11 -Wall main.cpp -o main
test:
	./main 
