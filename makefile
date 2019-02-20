2_uzduotis: funkcijos.o in_out.o tikrinimas.o
	g++ -o 2_uzduotis 2_uzduotis.cpp funkcijos.o in_out.o tikrinimas.o
funkcijos:
	g++ -c funkcijos.cpp
in_out:
	g++ -c in_out.cpp
tikrinimas:
	g++ -c tikrinimas.cpp
clean:
	del *.o 2_uzduotis.exe
