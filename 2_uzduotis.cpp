#include <iostream>
#include <string>
#include <iomanip>  
double Mediana(int ND[], int n);
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
	int ND[n+1];
	int laik;
	for(int i =1;i <=n; i++){
		std::cout <<"Iveskite nr " << i << " namu darbo rezultata (1-10)" << std::endl;
		std::cin >> laik;
		if(laik >10 || laik <1){
		  std::cout <<"Jus ivedete neimanoma rezultata, bandykite dar karta" << std::endl;
		  i= i-1;
		}
		else {
			ND[i] = laik;
			suma = suma + laik;
		}
	}
	int ilgis;
	int egzam;
	double mediana;
	std::cout <<"Iveskite egzamino rezultata" << std::endl;
	std::cin >> egzam;
	if(egzam > 10 || egzam <1){
		while(egzam >10 || egzam < 1){
			std::cout <<"Jus ivedete neimanoma rezultata, bandykite dar karta" << std::endl;
			std::cout <<"Iveskite egzamino rezultata" << std::endl;
			std::cin >> egzam;
		}
	}
	else egzaminas = egzam;
	ND[n+1] = egzaminas;
	vidurkis = (double)suma/n;
	galutinis = 0.4 * vidurkis + 0.6*egzaminas;
	mediana = Mediana(ND, n);
	std::cout <<std::left <<std::setw(15)<<"Pavarde" <<std::left << std::setw(13) << "Vardas" <<std::left << std::setw(15) <<"VidGalutinis" << std::left << "MedGalutinis" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(53) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	std::cout <<std::left <<std::setw(15)<< pavarde << std::left << std::setw(13)  << vardas <<std::left << std::setw(15) << std::setprecision(2) <<std::fixed << galutinis << std::left << mediana << std::endl;
	return 0;
}
double Mediana(int ND[], int n){
	int laik;
	double mediana;
	for(int i = 1; i <= n; i++){
		for(int j= i+1; j<= n; j++){
			if(ND[i] > ND[j]){
				laik = ND[j];
				ND[j] = ND[i];
				ND[i] = laik;
			}
		}
	}
	if(n%2 == 0 || n == 2) mediana = (ND[n/2]+ND[n/2+1])/2;
	else mediana = ND[n/2+1];
	return mediana;
}
