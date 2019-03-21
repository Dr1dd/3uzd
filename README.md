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

Nuotraukos su programos laikais: [vektoriai](https://imgur.com/a/WJtahba), [listai](https://imgur.com/a/adZMfZU), [dekai](https://imgur.com/a/hKofp2w)
