CC := g++
FLAGS := -Wall -O2 -std=c++11 -g

all:
	@echo "Compile programm"
	$(CC) $(FLAGS) dz_3_1.cpp -o dz_3_1
	$(CC) $(FLAGS) dz_3_2.cpp -o dz_3_2
	$(CC) $(FLAGS) dz_3_4.cpp -o dz_3_4
	
	


	
	