all: loading

preprocessing: task01.cpp
	g++ -E task01.cpp -o task01.ii

compilation: preprocessing
	g++ -S task01.ii -o task01.s

assembling: compilation
	as task01.s -o task01.o

linking: assembling
	g++ task01.o -o task01.out
	
loading: linking
	./task01.out

clean:
	rm task01.ii task01.o task01.s task01.out