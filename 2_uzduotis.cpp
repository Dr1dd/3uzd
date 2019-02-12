#include <iostream>
#include <string>
#include <iomanip>  
int main(){
	std::string vardas, pavarde;
	int n;
    double egzaminas;
	double galutinis;
	double vidurkis;
	int suma = 0;
	std::cout <<"Iveskite varda" << std::endl;
	std::cin >> vardas;
	std::cout <<"Iveskite pavarde" << std::endl;
	std::cin >> pavarde;
	std::cout <<"Iveskite kiek namu darbu buvo atlikta" << std::endl;
	std::cin >> n;
	int laik;
	for(int i =0;i <n; i++){
		std::cout <<"Iveskite nr " << i << " namu darbo rezultata (1-10)" << std::endl;
		std::cin >> laik;
		if(laik >10 || laik <1){
		  std::cout <<"Jus ivedete neimanoma rezultata, bandykite dar karta" << std::endl;
		  i= i-1;
		}
		else suma = suma + laik;
	}
	int ilgis;
	std::cout <<"Iveskite egzamino rezultata" << std::endl;
	std::cin >> egzaminas;
	vidurkis = (double)suma/n;
	galutinis = 0.4 * vidurkis + 0.6*egzaminas;
	std::cout <<std::left <<std::setw(15)<<"Pavarde" <<std::left << std::setw(13) << "Vardas" <<std::left << "VidGalutinis" << std::endl;
	std::cout <<std::setfill('-') << std::setw(40) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	std::cout <<std::left <<std::setw(15)<< pavarde << std::left << std::setw(13)  << vardas <<std::left << std::setprecision(2) <<std::fixed << galutinis << std::endl;
	return 0;
}
