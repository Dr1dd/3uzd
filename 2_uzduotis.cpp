#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
//double Mediana(std::vector<int> ND, int n, int p);
int main(){
	std::string vardas, pavarde;
	int n;
    double egzaminas;
	double galutinis;
	double vidurkis;
	int studSkaic;
	int p = 0;
	int laikina = 1;
	int laik;
	int ilgis;
	int egzam;
	double mediana;
	std::vector<std::vector<std::string> > StudentuVardai;
	std::vector<std::vector<int> > StudentuBalai;
	int suma = 0;
	std::cout <<"Iveskite studentu skaiciu" << std::endl;
	std::cin >> studSkaic;
	
	std::string ivestis;
	std::vector<double> GRez;
for(int c = 0; c< studSkaic; c++){
	 n = 0;
	 p = 0;
	laikina = 1;
	laik= 0;
	suma = 0;
	StudentuVardai.push_back(std::vector<std::string>());
	StudentuBalai.push_back(std::vector<int>());
	std::cout <<"Iveskite varda" << std::endl;
	std::cin>> vardas;
	StudentuVardai[c].push_back(vardas);
	std::cout <<"Iveskite pavarde" << std::endl;
	std::cin >>pavarde;
	StudentuVardai[c].push_back(pavarde);
	
	std::cout <<"Iveskite kiek namu darbu buvo atlikta (0 = ivedimas baigiamas)" << std::endl;
	 std::cin.sync();
	 std::getline(std::cin, ivestis);
	 std::stringstream s(ivestis);
    if(s >> n){
			for(int i =1;i <=n; i++){
		std::cout <<"Iveskite nr " << i << " namu darbo rezultata (1-10) (0 = ivedimas baigiamas)" << std::endl;
		std::cin >> laik;
		if(laik >10 || laik <0){
		  std::cout <<"Jus ivedete neimanoma rezultata, bandykite dar karta" << std::endl;
		  i= i-1;
		}
		else {
	
			StudentuBalai[c].push_back(laikina);
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
				StudentuBalai[c].push_back(laikina);
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
	galutinis = 0.4 * vidurkis + 0.6*egzaminas;
	GRez.push_back(galutinis);
}
	std::string tipas;
	std::cout <<"Pasirinkite kokio rezultato norite - Vid ar Med" << std::endl;
	std::cin >> tipas;
	
	while(tipas!= "Vid" || tipas!="Med"){
		std::cout<<"Ivestis neteisinga, bandykite dar karta" << std::endl;
		std::cin >> tipas;
}
	if(tipas == "Vid"){
	std::cout <<std::left <<std::setw(15)<<"Pavarde" <<std::left << std::setw(13) << "Vardas" <<std::left << std::setw(19) <<"Galutinis (Vid.)" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(60) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	for(int nuo = 0; nuo < studSkaic; nuo++){
		std::cout <<std::left <<std::setw(15)<< StudentuVardai[nuo][1] << std::left << std::setw(13)  << StudentuVardai[nuo][0] <<std::left << std::setw(19) << std::setprecision(2) <<std::fixed << GRez[nuo] << std::endl;
	}
	}
	else{
	mediana = Mediana(, n, p)
	std::cout <<std::left <<std::setw(15)<<"Pavarde" <<std::left << std::setw(13) << "Vardas" <<std::left << std::setw(19) << "Galutinis (Med.)" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(60) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	for(int nuo1 = 0; nuo1 < studSkaic; nuo1++){
		std::cout <<std::left <<std::setw(15)<< StudentuVardai[nuo1][1] << std::left << std::setw(13)  << StudentuVardai[nuo1][0] <<std::left << std::setw(19) << std::setprecision(2) <<std::fixed << mediana << std::endl;
	}	
	}
	

	return 0;
}

/*double Mediana(int *ND, int n, int p){
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
*/
