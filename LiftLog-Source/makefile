# makefile

all: run_ll

Lift.o: Lift.cpp 
	g++ -c -g Lift.cpp

func.o: func.cpp 
	g++ -c -g func.cpp

main.o : main.cpp
	g++ -c -g main.cpp

run_ll: main.o Lift.o func.o
	g++ -o run_ll main.o Lift.o func.o

clean:
	rm *.o