#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H


class Zmogus{
	public:
void setFname(std::string fname_){
	fname = fname_;
}
void setLname(std::string lname_){
	lname = lname_;
}
virtual void setegzRez(double egzGalutinis) = 0;
	protected:
		std::string fname;
		std::string lname;
		double ugis;
		bool lytis; // pvz 1 - vyras 0 - moteris
};

class Studentai: public Zmogus{
	private:
		double egzGal;
		double mediana;
		std::vector<double> ND;	
	public:
		/**
		* Konstruktorius (paprastas)
		**/
		Studentai(){
			fname = " ";
			lname = " ";
			egzGal = 0;
			mediana = 0;
		}
		/**
		* Destruktorius
		**/
		~Studentai(){}
		/**
		* copy Konstruktorius
		**/
		Studentai(const  Studentai& a)
		{
			fname = a.fname;
			lname = a.lname;
			egzGal = a.egzGal;
			mediana = a.mediana;
			ND = a.ND;
		}
		/**
		* copy assignment operatorius
		**/
		Studentai& operator=(const Studentai& a){
			if(&a == this) return *this;
			fname = a.fname;
			lname = a.lname;
			egzGal = a.egzGal;
			mediana = a.mediana;
			ND = a.ND;
			return *this;
			
		}
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
 bool operator!= (Studentai &a, Studentai &b);
Studentai Informacija();
void Spausdinti(std::vector<Studentai> Studentai, std::string tipas, int studSkaic);
void Spausdinti(std::vector<Studentai> Studentai);
double Mediana(Studentai Stud, int n, int p);
std::string Tikrinti(std::string tekstas);
double TikrintiSkaicius(std::string tekstas);
void Skaitymas(std::vector<Studentai> &StudentuInfo, std::string pav);
bool Lyginimas(const Studentai &a, const Studentai &b);
bool fileExists(const std::string& filename);
void Generuoti(int n);
void Generuoti(std::vector<Studentai> StudentuInfo, int n);
void FailuIrasymas(std::vector<Studentai> StudentuInfo, int n);
void VectorRusiavimas1strat(std::vector<Studentai> StudentuInfo, int n);
void VectorRusiavimas2strat(std::vector<Studentai> StudentuInfo, int n);
void vector();
bool maziau(Studentai &i);
void raskMinkstus(std::vector<Studentai> &StudentuInfo, int n);
void iterpkKietus(std::vector<Studentai> &StudentuInfo, int n);

#endif
