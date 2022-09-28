CXXFLAGS = -std=c++17 -Wall

TikTakToe : ttt.o ttt_functions.o
	g++ ttt.o ttt_functions.o -Wall -o 'TikTakToe'
	echo 'TikTakToe built successfully'

ttt.o : ttt.cpp ttt_functions.h
	g++ -c ttt.cpp $(CXXFLAGS)
	echo 'ttt.o built successfully'

ttt_functions.o : ttt_functions.cpp ttt_functions.h
	g++ -c ttt_functions.cpp $(CXXFLAGS)
	echo 'ttt_functions.o built successfully'