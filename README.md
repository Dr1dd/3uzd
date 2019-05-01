# 2 užduotis
Antra objektinio programavimo užduotis.
## Reikiami failai
* GNU compileriai: [link: mingw](http://www.mingw.org)
### Programos kompiliavimas ir paleidimas
Turint reikiamus kompiliatorius vykdomi šie žingsniai:
[Imgur linkas](https://imgur.com/a/yB0usfs)
# Releasai:
### [1 Releasas (v0.1)](https://github.com/Dr1dd/2-u-d./releases/tag/v0.1)
Programa idealizuota maždaug pagal reikalavimus, bet skaičių generavimas yra generuojamas pseudo generatoriumi. Tai bus ištaisyta versijoje v1.0
### [2 Releasas (v0.2)](https://github.com/Dr1dd/2-u-d./releases/tag/v0.2)
Pridėtas pasirinkimas programoje tarp įvesties ir skaitymo iš failo. Be C masyvų.
Rikiavimas veikia pagal užduoties [reikalavimus:](https://github.com/objprog/paskaitos2019/wiki/2-oji-u%C5%BEduotis#reikalavimai-versijai-v02-terminas-2019-02-24-)
### [3 Releasas (v0.3)](https://github.com/Dr1dd/2-u-d./releases/tag/v0.3)
Programoje pradedamos naudoti struktūros ir header failas.
Pradedamas naudoti išimčių valdymas (try-catch) programoje, kur vartotojo Integer įvestis gali būti per ilga (pvz.: skaičius 10^10)
```
	while(valid){
		valid = false;
	try{
		studSkaic = TikrintiSkaicius(tekstas);		
	}
	catch(const std::out_of_range& e){
		std::cout<< "Sis skaicius yra per didelis, bandykite dar karta" <<std::endl;
		valid = true;
		
	}
}
```
### [4 Releasas (v0.4)](https://github.com/Dr1dd/2-u-d./releases/tag/v0.4)
Programos veikimo laikai:

| Bandymas gen. | Laikas        |
| :-------------: | ------------- |
| 1.            | 15.64 s.      |
| 2.            | 11.35 s.      |
| 3.            | 13.61 s.      |
| 4.            | 10.91 s.      |


* [Failų generavimas (foto)](https://imgur.com/a/emVwq4E)

| Bandymas kursiokai.txt | Laikas   |
| :--------: | -------- |
| 1.       | 2.57 s. |
| 2.       | 2.8 s. |

* [Skaitymas iš kursiokai.txt (foto)](https://imgur.com/a/xGUrfVX)
### [5 Releasas (v0.5)](https://github.com/Dr1dd/2-u-d./releases/tag/v0.5)
Nuotraukos su kiekvieno konteinerio generavimo laikais yra pačiame [release.](https://github.com/Dr1dd/2-u-d./releases/tag/v0.5)

| Bandymas (Skaitant iš sugeneruotų failų) | Laikas   |
| :--------: | -------- |
| vektoriai       | 13.73 s. |
| listai     | 14.23 s. |
| dekai       | 13.70 s. |

___

| Bandymas (Skaitant ir spausdinant iš kursiokai.txt) | Laikas   |
| :--------: | -------- |
| vektoriai       | 0.04 s. |
| listai     | 0.03 s. |
| dekai       | 0.04 s. |

Failai nėra generuojami. Taip pat rūšiuojami studentai nėra išsaugojami jokiame konteineryje. Tai bus padaryta versijoje v1.0.

Laikas skaičiuojamas tik skaitant iš failų (10-100000.txt ir kursiokai.txt) (pagal tam tikrą konteinerio tipą: vector, list ar deque)
### [Paskutinis 6 Releasas (v1.0)](https://github.com/Dr1dd/2-u-d./releases/tag/v1.0)
Paskutinė programos versija reikalavo paanalizuoti programos veikimo laikus pagal naudojamus konteinerius ir tam tikrus algoritmus, kurie galimai paspartintų programos veikimą.

Užduotyje nurodytų studentų rūšiavimą reikėjo perteikti trimis skirtingais konteineriais: vektoriais, dekais ir listais. Taip pat rūšiavima teko realizuoti pagal dvi strategijas:

1. Susikuriant dar 2 naujus tokio pačio tipo konteinerius ir į juos surūšiuoti studentus, kurie "išlaikė" arba "neišlaikė".

2. Susikuriant 1 naują tokio pat tipo konteinerį ir į jį sukeliant studentus, kurie "neišlaikė", na ir iš pagrindinio konteinerio ištrinant tuos pačius studentus.

**Programos laiko skaičiavimai:**

| Vektoriai 1 strat. (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.002179 s. |
| 100 | 0.076071 s. |
| 1000 | 0.044098 s. |
| 10000 | 0.165092 s. |
| 100000 | 1.42633 s. |

| Vektoriai 2 strat. (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.00248 s. |
| 100 | 0.008927 s. |
| 1000 | 0.289948 s. |
| 10000 | 25.7449 s. |
| 100000 | ∞ |

___

| Listai 1 strat. (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.00234 s. |
| 100 | 0.006944 s. |
| 1000 | 0.02109 s. |
| 10000 | 0.13012 s. |
| 100000 | 1.38188 s. |

| Listai 2 strat. (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.244209 s. |
| 100 | 0.005561 s. |
| 1000 | 0.018242 s. |
| 10000 | 0.127754 s. |
| 100000 | 1.2391 s. |

___

| Dekai 1 strat. (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.003966 s. |
| 100 | 0.007231 s. |
| 1000 | 0.018848 s. |
| 10000 | 0.136482 s. |
| 100000 | 1.34894 s. |

| Dekai 2 strat. (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.003471 s. |
| 100 | 0.006946 s. |
| 1000 | 0.06399 s. |
| 10000 | 4.53074 s. |
| 100000 | ∞ |

**Su optimizavimais:**

| Vektoriai 1 strat. + copyif (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.002482 s. |
| 100 | 0.007764 s. |
| 1000 | 0.020686 s. |
| 10000 | 0.162558 s. |
| 100000 | 1.61132 s. |

___

| Vektoriai 2 strat. + removeif (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.003924 s. |
| 100 | 0.007018 s. |
| 1000 | 0.026792 s. |
| 10000 | 0.216071 s. |
| 100000 | 1.60784 s. |

| Vektoriai 2 strat. + removeif + copyif (Studentai) | Laikas |
| ----------------- | ------ |
| 10 | 0.002486 s. |
| 100 | 0.007804 s. |
| 1000 | 0.02193 s. |
| 10000 | 0.153789 s. |
| 100000 | 1.4865 s. |

* Funkcijos naudojamos programos efektyvumui pagerinti: [imgur](https://imgur.com/a/ZUuqimf)

Greičiausias gautas laikas buvo gautas naudojant list'us ir 2 studentų rūšiavimo strategiją.

Nuotraukos su programos laikais: [vektoriai](https://imgur.com/a/WJtahba), [listai](https://imgur.com/a/adZMfZU), [dekai](https://imgur.com/a/hKofp2w)
### [Papildomas Releasas (v1.01)](https://github.com/Dr1dd/2-u-d./releases/tag/v1.01)
Papildoma užduotis reikalauja dar vieno studentų rūšiavimo būdo -> push backinti mažiau nei 5 balus gavusius studentus į naują vector konteinerį (šiuo atveju pav. neismoko) ir įterpti daugiau arba 5 gavusius studentus į tą patį pradinį buvusį vector konteinerį (mano atveju StudentuInfo).

Buvo sukurtos naujos funkcijos: raskMinkstus(); iterpkKietus(); raskMinkstusDeque(); iterpkKietusDeque();


| Vektoriai papildoma strat. "minkštų" rūšiavimas | Laikas |
| ----------------- | ------ |
| 10 | 0.003027 s. |
| 100 | 0.005021 s. |
| 1000 | 0.01382 s. |
| 10000 | 0.067877 s. |
| 100000 | 0.599438 s. |

| Vektoriai papildoma strat. "kietų" rūšiavimas | Laikas |
| ----------------- | ------ |
| 10 | 0.00303 s. |
| 100 | 0.009994 s. |
| 1000 | 0.374872 s. |
| 10000 | 39.9822 s. |
| 100000 | +600 s. |

Šiuo būdu rūšiuojant studentus "kieti" studentai yra rūšiuojami ytin ilgai.
___

| Dekai papildoma strat. "minkštų" rūšiavimas | Laikas |
| ----------------- | ------ |
| 10 | 0.004987 s. |
| 100 | 0.005988 s. |
| 1000 | 0.011147 s. |
| 10000 | 0.071503 s. |
| 100000 | 0.470746 s. |


| Dekai papildoma strat. "kietų" rūšiavimas | Laikas |
| ----------------- | ------ |
| 10 | 0.002991 s. |
| 100 | 0.005986 s. |
| 1000 | 0.014964 s. |
| 10000 | 0.109712 s. |
| 100000 | 0.80394 s. |

Šiuo būdu rūšiuojant studentus, rūšiavimo laikas žymiai pagreitėja palyginus su vektoriais. 
Taip pat "minkštų" studentų rūšiavimo laikas yra trumpesnis nei "kietų". Insert tipo rūšiavimas labiau tinka dekų konteineriams, nes į juos galima tiesiog "push front'inti".

Nuotraukos su keliais bandymais: [imgur link](https://imgur.com/a/kNWviiv)


# 3 užduotis

## Releasai:

### [1 Releasas (v1.1)](https://github.com/Dr1dd/3uzd/releases/tag/v1.1)
Gauta užduotis buvo pakeisti stuktūrą `Studentai` į klasę `Studentai`.

Šią užduotį pavyko realizuoti naudojant get'terius ir set'terius. PVZ.:
```
	void setLname(std::string lname_);
	inline std::string pavarde() const { return lname; }
```
Užduotis reikalavo patikrinti programos veikimo laiką su struktūra ir su klase.

Rezultatai:

| Studentų skaičius | Laikas 1 strategijos su struktūra |  Laikas 1 strategijos su klase |
| ----------------- | ------ | ------- |
| 10 | 0.00403 s. | 0.007812 s. |
| 100 | 0.0117 s. | 0.00757 s. |
| 1000 | 0.01955 s. | 0.0196 s. |
| 10000 | 0.10399 s. | 0.10800 s. |
| 100000 | 0.8896 s. | 0.9760 s. |


| Studentų skaičius | Laikas 2 strategijos su struktūra |  Laikas 2 strategijos su klase |
| ----------------- | ------ | ------- |
| 10 | 0.00404 s. | 0.01158 s. |
| 100 | 0.007588 s. | 0.008025 s. |
| 1000 | 0.01757 s. | 0.050232 s. |
| 10000 | 0.10755 s. | 0.1119 s. |
| 100000 | 0.98011 s. | 0.9739 s. |

Programa veikia panašiu/vienodu greičiu.

Programos studentų rūšiavimo laikai naudojantis optimizavimo flag'us:

| Studentų skaičius | Laikas be flag'ų |
| ----------------- | ------ |
| 10 | 0.007947 s. | 
| 100 | 0.1673 s. |
| 1000 | 0.0459 s. | 
| 10000 | 0.25997 s. |
| 100000 | 1.0003 s. | 

| Studentų skaičius | Laikas su -O1 flag'u |
| ----------------- | ------ |
| 10 | 0.007999 s. | 
| 100 | 0.01201 s. |
| 1000 | 0.036 s. | 
| 10000 | 0.1115 s. |
| 100000 | 0.951 s. | 

| Studentų skaičius | Laikas su -O2 flag'u |
| ----------------- | ------ |
| 10 | 0.00594 s. | 
| 100 | 0.008034 s. |
| 1000 | 0.02 s. | 
| 10000 | 0.1116 s. |
| 100000 | 1.0226 s. | 

| Studentų skaičius | Laikas su -O3 flag'u |
| ----------------- | ------ |
| 10 | 0.0116 s. | 
| 100 | 0.0356 s. |
| 1000 | 0.016 s. | 
| 10000 | 0.273 s. |
| 100000 | 0.956 s. | 

Kaip matome, keičiant optimizavimo flag'us, programos studentų rūšiavimo laikas beveik arba visiškai nesikeičia.

### [2 Releasas (v1.2)](https://github.com/Dr1dd/3uzd/releases/tag/v1.2)

Gauta užduotis reikalavo realizuoti galimus programai papildomus operatorius.
"Overload'inti" operatoriai:

`>` `>>` `<<` `=` `<=` `/` `+=` `==`

Pvz.:

![friend operatoriai](https://i.imgur.com/oqfKKuP.png)

### [3 Releasas (v1.5)](https://github.com/Dr1dd/3uzd/releases/tag/v1.5)

Ši užduotis reikalavo iš vienos turimos klasės padaryti dvi: bazinę (base) ir išvestinę (derived) klases. Išvestinė klasė paveldi tam tikrus kintamuosius ar funkcijas iš bazinės klasės. Šiuo atveju programoje buvo sukurti `Žmogaus` ir `Studentų` klasės.
pvz.: Zmogaus bazinė klasė
```
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
```
Padaryta `virtual` funkcija reiškia, jog šios klasės objektų negalima padaryti. Jeigu virtual funkcija egzistuoja bazinėje klasėje, tai reiškia, kad šios klasės išvestinėse klasėse turės būtinai būti ta pati (pavadinimas toks pat) tik ne virtual funkcija.

Išvestinė klasė `Studentai`:

```
class Studentai: public Zmogus{

}
```
Taip Studentai klasė paveldi `Vardus` ir `Pavardes` iš `Žmogaus` klasės.


### [4 Releasas (v2.0)](https://github.com/Dr1dd/3uzd/releases/tag/v2.0)

Gauta ketvirtoji užduotis buvo sukurti `Doxygen` dokumentaciją (dokumentacijos generavimas) ir padaryti kelis `Unit` testus.
Dokumentaciją pavyko sugeneruoti pasinaudojus DoxyWizard programa. Pasirinktas `EXTRACT_ALL` būdas.
![imgur](https://imgur.com/p7WOLht.png)

Keli unit testai buvo išbandyti naudojant `Catch2` framework'ą. [Link](https://github.com/catchorg/Catch2). Šis framework'as yra turbūt vienas iš paprasčiausių naudoti. 
Žingsniai, kurie yra reikalingi tolimesniam testavimui:

Mes matome, jog turime `unit_testui` aplanką, kuriame yra reikiami failai (tiksliau catch.h ir catch2config.cpp). Šiuos failus perkeliame yra pagrindinį aplanką, kuriame yra visi kiti cpp ir header failai. `makefile` failiuką pakeičiame taip:
![](https://imgur.com/mNJ5ie7.png)

Tai reiškia, kad mūsų catch2config failas pakeis 3_uzduotis.cpp failą, kuris iki šiol buvo main failas.

Galiausiai pasirinkę tam tikra cpp failiuką, kuriame darysime testus jame viršuje "includiname" `#include "catch.h"`.
Dabar jau galime pradėti testuoti savo funkcijas. Pvz.:
![](https://imgur.com/dfJQmgr.png)

Atlikti testai:

[Su Teksto tikrinimu](https://imgur.com/a/55h0UoI)

[Su Skaičių tikrinimu](https://imgur.com/a/1C7pTPP)

[Su Failo egzistavimu](https://imgur.com/a/53BN1uG)

[Su vectoriais (panaudotos sekcijos)](https://imgur.com/a/XUdPTky)
