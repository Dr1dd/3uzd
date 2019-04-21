#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H
#include <list>
#include <deque>

class Studentai{
	private:
		std::string fname, lname;
		double egzGal;
		double mediana;
		std::vector<double> ND;	
	public:
		Studentai(){
			fname = " ";
			lname = " ";
			egzGal = 0;
			mediana = 0;
		}
		Studentai& operator=(const Studentai& a){
			if(&a == this) return *this;
			fname = a.fname;
			lname = a.lname;
			egzGal = a.egzGal;
			mediana = a.mediana;
			ND = a.ND;
			return *this;
			
		}
	void setFname(std::string fname_);
	void setLname(std::string lname_);
	void setegzRez(double egzGalutinis);
	void setMediana(double med);
	void setND(double ND_);
	std::vector<double>& getND();
	double getND(int nr);
	inline std::string vardas() const { return fname; } // geteriai
	inline std::string pavarde() const { return lname; }
	double getEgzRez(){ return egzGal; }
	double getMediana(){ return mediana; }
	
		friend std::ostream& operator<<(std::ostream& out, const Studentai &a){
			out <<std::left << std::setw(14) << a.lname << std::left << std::setw(14) <<a.fname;
			return out;
		}
		friend std::istream& operator>>(std::istream& in, Studentai &a){
			in >> a.fname >> a.lname;
			return in;
		}
		friend bool operator> (Studentai &a, Studentai &b){
			 return a.egzGal > b.egzGal;
		} 
		friend bool operator<= (Studentai &a, Studentai &b){
			 return a.egzGal <= b.egzGal;
		}       
   		friend double operator/ (const Studentai& a, double n){
   			return a.egzGal / n;
		   }
		friend double& operator+=(double& b, const Studentai& a){
		for(auto &i : a.ND)	b = b + i;
			return b;
		}

};

 bool operator== (Studentai &a, Studentai &b);
Studentai Informacija();
void Spausdinti(std::vector<Studentai> Studentai, std::string tipas, int studSkaic);
void Spausdinti(std::vector<Studentai> Studentai);
//void SpausdintiList(std::list<Studentai> &StudentuInfo);
//void SpausdintiDeque(std::deque<Studentai> &StudentuInfo);
double Mediana(Studentai Stud, int n, int p);
std::string Tikrinti(std::string tekstas);
double TikrintiSkaicius(std::string tekstas);
void Skaitymas(std::vector<Studentai> &StudentuInfo, std::string pav);
//void SkaitymasList(std::list<Studentai> &StudentuInfo, std::string pav);
//void SkaitymasDeque(std::deque<Studentai> &StudentuInfo, std::string pav);
bool Lyginimas(const Studentai &a, const Studentai &b);
bool fileExists(const std::string& filename);
void Generuoti(int n);
void Generuoti(std::vector<Studentai> StudentuInfo, int n);
//void Generuoti(std::list<Studentai> &StudentuInfo, int n);
//void Generuoti(std::deque<Studentai> StudentuInfo, int n);
void FailuIrasymas(std::vector<Studentai> StudentuInfo, int n);
//void FailuIrasymas(std::list<Studentai> &StudentuInfo, int n);
//void FailuIrasymas(std::deque<Studentai> StudentuInfo, int n);
void VectorRusiavimas1strat(std::vector<Studentai> StudentuInfo, int n);
//void ListRusiavimas1strat(std::list<Studentai> &StudentuInfo, int n);
//void DequeRusiavimas1strat(std::deque<Studentai> StudentuInfo, int n);
void VectorRusiavimas2strat(std::vector<Studentai> StudentuInfo, int n);
//void ListRusiavimas2strat(std::list<Studentai> &StudentuInfo, int n);
//void DequeRusiavimas2strat(std::deque<Studentai> StudentuInfo, int n);
void vector();
//void list();
//svoid deque();
bool maziau(Studentai &i);
void raskMinkstus(std::vector<Studentai> &StudentuInfo, int n);
//void raskMinkstusDeque(std::deque<Studentai> &StudentuInfo, int n);
void iterpkKietus(std::vector<Studentai> &StudentuInfo, int n);
//void iterpkKietusDeque(std::deque<Studentai> &StudentuInfo, int n);

#endif
