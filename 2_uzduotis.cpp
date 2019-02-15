#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <algorithm>
struct Studentai{
	std::string fname, lname;
	double egzGal;
	double mediana;
	std::vector<int> ND;
};
Studentai Informacija();
void Spausdinti(const std::vector<Studentai> Studentai, std::string tipas, int studSkaic);
double Mediana(Studentai &Stud, int n, int p);
int main(){
	int studSkaic;
	std::cout <<"Iveskite studentu skaiciu" << std::endl;
	std::cin >> studSkaic;
	
	std::vector<Studentai> StudentuInfo;
	for(int i = 0 ; i< studSkaic; i++) StudentuInfo.push_back(Informacija());
	
	
	std::string tipas;
	std::cout <<"Pasirinkite kokio rezultato norite - Vid ar Med" << std::endl;
	std::cin >> tipas;
	
	while(tipas!= "Vid" && tipas !="Med"){
		std::cout<<"Ivestis neteisinga, bandykite dar karta" << std::endl;
		std::cin >> tipas;
}
	Spausdinti(StudentuInfo, tipas, studSkaic);
	
	return 0;
}
void Spausdinti(const std::vector<Studentai> Studentai, std::string tipas, int studSkaic){
	if(tipas == "Vid"){
	std::cout <<std::left <<std::setw(15)<<"Pavarde" <<std::left << std::setw(13) << "Vardas" <<std::left << std::setw(19) <<"Galutinis (Vid.)" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(60) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	for(int nuo = 0; nuo < studSkaic; nuo++){
		std::cout <<std::left <<std::setw(15)<< Studentai[nuo].lname << std::left << std::setw(13)  << Studentai[nuo].fname <<std::left << std::setw(19) << std::setprecision(2) <<std::fixed << Studentai[nuo].egzGal << std::endl;
	}
	}
	else{
	std::cout <<std::left <<std::setw(15)<<"Pavarde" <<std::left << std::setw(13) << "Vardas" <<std::left << std::setw(19) << "Galutinis (Med.)" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(60) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	for(int nuo1 = 0; nuo1 < studSkaic; nuo1++){
		std::cout <<std::left <<std::setw(15)<< Studentai[nuo1].lname << std::left << std::setw(13)  << Studentai[nuo1].fname <<std::left << std::setw(19) << std::setprecision(2) <<std::fixed << Studentai[nuo1].mediana << std::endl;
	}	
	}
	
}
Studentai Informacija(){
	std::string vardas, pavarde;
	int n =0;
	double galutinis;
	double vidurkis;
	int studSkaic;
	int p = 0;
	int laikina = 1;
	int laik = 0;
	int ilgis;
	int egzam = 0;
	double egzaminas = 0;
	double mediana = 0;
	
	int suma = 0;
	
	Studentai Stud;
	
	std::string ivestis;
	std::cout <<"Iveskite varda" << std::endl;
	std::cin>> Stud.fname;
	std::cout <<"Iveskite pavarde" << std::endl;
	std::cin >>Stud.lname;
	
	std::cout <<"Iveskite kiek namu darbu buvo atlikta (0 = ivedimas baigiamas)" << std::endl;
	 std::cin.sync();
	 std::getline(std::cin, ivestis);
	 std::stringstream s(ivestis);
    if(s >> n){
			for(int i =1;i <=n; i++){
		std::cout <<"Iveskite nr " << i << " namu darbo rezultata (1-10)" << std::endl;
		std::cin >> laik;
		if(laik >10 || laik <0){
		  std::cout <<"Jus ivedete neimanoma rezultata, bandykite dar karta" << std::endl;
		  i= i-1;
		}
		else {
			Stud.ND.push_back(laik);
			suma = suma + laik;	
		}
        }
    }
    else{
        while(laikina != 0){
			std::cout <<"Iveskite nr " << p+1 << " namu darbo rezultata (1-10) (0 = ivedimas baigiamas)" << std::endl;
			std::cin>> laikina;
			if(laikina >10 || laikina <0){
		  		std::cout <<"Jus ivedete neimanoma rezultata, bandykite dar karta" << std::endl;
		}
			else {
				if(laikina == 0) break;
				p++;
				Stud.ND.push_back(laikina);
				suma = suma + laikina;
			}
		}
	}

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
	if(p>0)vidurkis = (double)suma/p;
	else vidurkis = (double)suma/n;
	mediana = Mediana(Stud, n, p);
	galutinis = 0.4 * vidurkis + 0.6*egzaminas;
	Stud.egzGal = galutinis;
	Stud.mediana = 0.4 * mediana + 0.6*egzaminas;


return Stud;
}

double Mediana(Studentai &Stud, int n, int p){
	double mediana;
	std::sort(Stud.ND.begin(), Stud.ND.end());
	for(int i = 0; i <n; i++){
		std::cout << Stud.ND[i] << std::endl;
	}
	if(n!=0){
		if(n % 2 == 0) mediana = (Stud.ND[n/2-1] + Stud.ND[n/2]) / 2;
		else {
			if(n == 1) mediana = 1;
			else mediana = Stud.ND[n/2];
		}
	}
	else{
	if(p % 2 == 0)mediana = (Stud.ND[p/2-1] + Stud.ND[p/2]) / 2;
	 else {
	 	if(p == 1) mediana == 1;
	 	else mediana = Stud.ND[p/2];
	 }
}

return mediana;
}

