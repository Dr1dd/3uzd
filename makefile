2_uzduotis: funkcijos.o tikrinimas.o in_out.o vector.o Studentai.o
	g++ -o 2_uzduotis 2_uzduotis.cpp funkcijos.o tikrinimas.o in_out.o vector.o Studentai.o
funkcijos:
	g++ -std=c++11 funkcijos.cpp
tikrinimas:
	g++ -std=c++11 tikrinimas.cpp
in_out:
	g++ -std=c++11 in_out.cpp
vector:
	g++ -std=c++11 vector.cpp
Studentai:
	g++ -std=c++11 Studentai.cpp	
clean:
	del *.o 2_uzduotis.exe
