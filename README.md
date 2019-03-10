# 2 užduotis
Antra objektinio programavimo užduotis.
## Reikiami failai
* GNU compileriai: [link: mingw](http://www.mingw.org)
### Programos kompiliavimas ir paleidimas
Turint reikiamus kompiliatorius vykdomi šie žingsniai:
[Imgur linkas](https://imgur.com/a/yB0usfs)
# Releasai:
### [1 Releasas:](https://github.com/Dr1dd/2-u-d./releases/tag/v0.1)
Programa idealizuota maždaug pagal reikalavimus, bet skaičių generavimas yra generuojamas pseudo generatoriumi. Tai bus ištaisyta versijoje v1.0
### [2 Releasas:](https://github.com/Dr1dd/2-u-d./releases/tag/v0.2)
Pridėtas pasirinkimas programoje tarp įvesties ir skaitymo iš failo.
Rikiavimas veikia pagal užduoties [reikalavimus:](https://github.com/objprog/paskaitos2019/wiki/2-oji-u%C5%BEduotis#reikalavimai-versijai-v02-terminas-2019-02-24-)
### [3 Releasas:](https://github.com/Dr1dd/2-u-d./releases/tag/v0.3)
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
### [4 Releasas](https://github.com/Dr1dd/2-u-d./releases/tag/v0.4)
Programos veikimo laikai:
* [Failų generavimas](https://imgur.com/a/emVwq4E)
* [Skaitymas iš kursiokai.txt](https://imgur.com/a/xGUrfVX)
### [5 Releasas](https://github.com/Dr1dd/2-u-d./releases/tag/v0.5)
Nuotraukos su kiekvieno konteinerio generavimo laikais yra pačiame [release.](https://github.com/Dr1dd/2-u-d./releases/tag/v0.5)
Failai nėra generuojami taip pat rūšiuojami studentai nėra išsaugojami jokiame konteineryje. Tai bus padaryti versijoje v1.0
Laikas skaičiuojamas tik skaitant iš failų (10-100000.txt ir kursiokai.txt) (pagal tam tikrą konteinerio tipą: vector, list ar deque)
