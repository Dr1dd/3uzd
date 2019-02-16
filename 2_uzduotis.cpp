#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <cctype>
#include <fstream>
struct Studentai{
	std::string fname, lname;
	double egzGal;
	double mediana;
	std::vector<int> ND;
};
     
Studentai Informacija();
void Spausdinti(const std::vector<Studentai> Studentai, std::string tipas, int studSkaic);
void Spausdinti(const std::vector<Studentai> Studentai);
double Mediana(Studentai Stud, int n, int p);
std::string Tikrinti(std::string tekstas);
double TikrintiSkaicius(std::string tekstas);
void Skaitymas(std::vector<Studentai> &StudentuInfo);
int main(){
	srand(time(NULL));
	std::string pradinis;
	std::vector<Studentai> StudentuInfo;
	std::cout << "Skaitymas is failo ar ivestis? (1 = Skaitymas, 0=Ivestis)" << std::endl;
	std::cin >> pradinis;
		while(pradinis != "1" && pradinis !="0"){
			std::cout <<"Ivestis neteisinga, bandykite dar karta ivesdami 1 ar 0" << std::endl;
			std::cin >> pradinis;
		}
	if(pradinis == "1"){
			Skaitymas(StudentuInfo);
			Spausdinti(StudentuInfo);
		}
	else{
	int studSkaic;
	std::string tekstas;
	std::cout <<"Iveskite studentu skaiciu" << std::endl;
	std::cin.sync();
	studSkaic = TikrintiSkaicius(tekstas);
	
	for(int i = 0 ; i< studSkaic; i++) StudentuInfo.push_back(Informacija());
	
	
	std::string tipas;
	std::cout <<"Pasirinkite kokio rezultato norite - Vid ar Med" << std::endl;
	std::cin >> tipas;
	
	while(tipas!= "Vid" && tipas !="Med"){
		std::cout<<"Ivestis neteisinga, bandykite dar karta" << std::endl;
		std::cin >> tipas;
}
	Spausdinti(StudentuInfo, tipas, studSkaic);
}
	return 0;
}
void Spausdinti(const std::vector<Studentai> Studentai, std::string tipas, int studSkaic){
	int ilgiausiasV = 0;
	int ilgiausiaP = 0;
	for(int i = 0; i < studSkaic; i++) {
    if(Studentai[i].fname.size() > ilgiausiasV) ilgiausiasV = Studentai[i].fname.size();
    if(Studentai[i].lname.size() > ilgiausiaP) ilgiausiaP = Studentai[i].lname.size();
}
	if(tipas == "Vid"){
	std::cout <<std::left <<std::setw(7+ilgiausiaP)<<"Pavarde" <<std::left << std::setw(7+ilgiausiasV) << "Vardas" <<std::left << std::setw(19) <<"Galutinis (Vid.)" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(14+ilgiausiaP+ilgiausiasV+19) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	for(int nuo = 0; nuo < studSkaic; nuo++){
		std::cout <<std::left <<std::setw(7+ilgiausiaP)<< Studentai[nuo].lname << std::left << std::setw(7+ilgiausiasV)  << Studentai[nuo].fname <<std::left << std::setw(19) << std::setprecision(2) <<std::fixed << Studentai[nuo].egzGal << std::endl;
	}
	}
	else{
	std::cout <<std::left <<std::setw(7+ilgiausiaP)<<"Pavarde" <<std::left << std::setw(7+ilgiausiasV) << "Vardas" <<std::left << std::setw(19) << "Galutinis (Med.)" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(14+ilgiausiaP+ilgiausiasV+19) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	for(int nuo1 = 0; nuo1 < studSkaic; nuo1++){
		std::cout <<std::left <<std::setw(7+ilgiausiaP)<< Studentai[nuo1].lname << std::left << std::setw(7+ilgiausiasV)  << Studentai[nuo1].fname <<std::left << std::setw(19) << std::setprecision(2) <<std::fixed << Studentai[nuo1].mediana << std::endl;
	}	
	}
	
}
void Spausdinti(const std::vector<Studentai> Studentai){
	int studSkaic = 0;
	for(int z=0; z<Studentai.size(); z++){
		studSkaic++;
	}
	int ilg;
	int ilgiausiasV = 0;
	int ilgiausiaP = 0;
	for(int i = 0; i < studSkaic; i++) {	
    if(Studentai[i].fname.size() > ilgiausiasV) ilgiausiasV = Studentai[i].fname.size();
    if(Studentai[i].lname.size() > ilgiausiaP) ilgiausiaP = Studentai[i].lname.size();
}
	std::cout <<std::left <<std::setw(7+ilgiausiaP)<<"Pavarde" <<std::left << std::setw(7+ilgiausiasV) << "Vardas" <<std::left << std::setw(19) <<"Galutinis (Vid.)" <<std::left << std::setw(19) <<"Galutinis (Med.)" <<std::endl;
	std::cout <<std::setfill('-') << std::setw(14+ilgiausiaP+ilgiausiasV+38) << "-"<< std::endl;
	std::cout << std::setfill(' ');
	for(int nuo = 0; nuo < studSkaic; nuo++){
		std::cout <<std::left <<std::setw(7+ilgiausiaP)<< Studentai[nuo].lname << std::left << std::setw(7+ilgiausiasV)  << Studentai[nuo].fname <<std::left << std::setw(19) << std::setprecision(2) <<std::fixed << Studentai[nuo].egzGal << std::setw(19) << std::setprecision(2) <<std::fixed << Studentai[nuo].mediana<< std::endl;
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
	bool valid;
	Studentai Stud;
	bool raides = true;
	bool skaiciai = false;
	std::string tekstas;
	std::string ivestis;
	std::cout <<"Iveskite varda" << std::endl;
	std::cin.sync();
	Stud.fname = Tikrinti(tekstas);
	std::cout <<"Iveskite pavarde" << std::endl;
	std::cin.sync();
    Stud.lname = Tikrinti(tekstas);
	bool gen = false;
	std::string generuoti;
	int randomSkaic;
	std::cout <<"Iveskite kiek namu darbu buvo atlikta (Bet koks simbolis isskyrus skaicius = galesite baigti kai irasysite - 0)" << std::endl;
	 std::cin.sync();
	 std::getline(std::cin, ivestis);
	 std::stringstream s(ivestis);
    if(s >> n){
    	std::cout<<"Ar norite skaicius generuoti?(egz ir n.d.) Pasirinkimai: (Taip arba Ne)" << std::endl;
    	std::cin>> generuoti;
    	while(generuoti!= "Taip" && generuoti !="Ne" && generuoti!= "taip" && generuoti !="ne"){
		std::cout<<"Ivestis neteisinga, bandykite dar karta: (Iveskite Taip arba Ne)" << std::endl;
		std::cin >> generuoti;
   }
    	if(generuoti == "Taip"){
    	 gen = true;
    	for(int i =1;i <=n; i++){
    		randomSkaic = 1+rand()%10;
    	 Stud.ND.push_back(randomSkaic);
    	 suma = suma + randomSkaic;
    }
		}
		else{
			for(int i =1;i <=n; i++){
		std::cout <<"Iveskite nr " << i << " namu darbo rezultata (1-10)" << std::endl;
		std::cin.sync();
		laik = TikrintiSkaicius(tekstas);
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
    }
    else{
        while(laikina != 0){
			std::cout <<"Iveskite nr " << p+1 << " namu darbo rezultata (1-10) (0 = ivedimas baigiamas)" << std::endl;
			laikina = TikrintiSkaicius(tekstas);
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
	int egzas = 0;
	if(gen == true){
		egzas = 1+rand()%10;
	if(p>0)vidurkis = (double)suma/p;
	else vidurkis = (double)suma/n;
	galutinis = 0.4 * vidurkis + 0.6*egzas;
	Stud.egzGal = galutinis;
	mediana = Mediana(Stud, n, p);
	Stud.mediana = 0.4 * mediana + 0.6*egzas;
	}
	else{
	std::cout <<"Iveskite egzamino rezultata" << std::endl;
	std::cin.sync();
	egzam = TikrintiSkaicius(tekstas); 
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
	Stud.egzGal = galutinis;
	mediana = Mediana(Stud, n, p);
	Stud.mediana = 0.4 * mediana + 0.6*egzaminas;
}

return Stud;
}

double Mediana(Studentai Stud, int n, int p){
	double mediana;
	int f = 0;

	std::sort(Stud.ND.begin(), Stud.ND.end());

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
std::string Tikrinti(std::string tekstas){
	std::string n;
	bool valid;
		std::cin.sync();
	 do
    {
        std::getline(std::cin,tekstas);
        std::stringstream s(tekstas);
        valid = true;
        if(s >> n){
        for(auto& i : tekstas)
        {
            if(!std::isalpha(i))
            {
                valid = false;
                std::cout << "Ivestis neteisinga. Bandykite dar karta tik su raidemis" << std::endl;
                break;
            }
        }
    }
    else{
    	valid = false;
    	std::cout << "Ivestis neteisinga. Bandykite dar karta tik su raidemis" << std::endl;
	}
    }while(!valid);
    return tekstas;
}
double TikrintiSkaicius(std::string tekstas){
		bool valid;
    std::string n;
	do
    {
        std::getline(std::cin,tekstas);
        std::stringstream s(tekstas);
        if(s >> n){
        valid = true;
        for(auto& i : tekstas)
        {
            if(!std::isdigit(i))
            {
                valid = false;
                std::cout << "Ivestis neteisinga. Bandykite dar karta tik su skaiciais" << std::endl;
                break;
            }
        }
    }
    else{
	     valid = false;
         std::cout << "Ivestis neteisinga. Bandykite dar karta tik su skaiciais" << std::endl;
}
    }while(!valid);
    return std::stoi(tekstas);
}
void Skaitymas(std::vector<Studentai> &StudentuInfo){
	std::string a;
	std::string b;
	int skaicius = 0;
	int elSkaic = 0;
	int ndSkaic;
	double egz;
	int p = 0;
	Studentai Stud;
	double vidurkis;
	double galutinis;
	double mediana;
	int suma = 0;
	
	std::ifstream fd;
	fd.open("kursiokai.txt");
	if (!fd.is_open())
    {
       std::cout <<"Nepavyko atidaryti failo" << std::endl;
    }
    else{
	while(std::getline(fd, a)) skaicius++;
	fd.clear();
	fd.seekg(0, std::ios::beg);
	while(!fd.eof()){
		fd >> a;
		elSkaic++;
		if(a == "Egzaminas") break;
	}
	ndSkaic = elSkaic - 3;
	//fd.ignore(1000, '\n');
	for(int i = 0; i < skaicius-1; i++){
		for(int j = 0; j < elSkaic; j++){
			fd >> b;
			if(j == 0) Stud.lname = b;
			if(j == 1) Stud.fname = b;
			if(j == elSkaic-1) egz = std::stoi(b);
			if(j>1 && j < elSkaic-1) {
			Stud.ND.push_back(std::stoi(b));	
			}
		}
	vidurkis = (double)suma/ndSkaic;
	galutinis = 0.4 * vidurkis + 0.6*egz;
	Stud.egzGal = galutinis;
	mediana = Mediana(Stud, ndSkaic, p);
	Stud.mediana = 0.4 * mediana + 0.6*egz;
	StudentuInfo.push_back(Stud);
	Stud.ND.clear();
}
	fd.close();
}
}

