#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <cctype>
#include <random>
#include <fstream>
#include "funkcijos.h"

void Studentai::setFname(std::string fname_){
	fname = fname_;
}
void Studentai::setLname(std::string lname_){
	lname = lname_;
}
void Studentai::setegzRez(double egzGalutinis){
	egzGal = egzGalutinis;
}
void Studentai::setMediana(double med){
	mediana = med;
}
void Studentai::setND(double ND_){
	ND.push_back(ND_);
}
std::vector<double>& Studentai::getND(){
	return ND;
}
double Studentai::getND(int nr){
	return ND[nr];
}

