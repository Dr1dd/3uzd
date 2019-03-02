#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <cmath>
#include <chrono>
#include "funkcijos.h"

void vector(){
	std::string pradinis;
	std::string generate;
	std::cout << "Pasirinkta vector konteineriai" << std::endl;
    std::cout << "Skaitymas is failo ar ivestis? (1 = Skaitymas, 0=Ivestis)" << std::endl;
    std::cin >> pradinis;
    std::vector <Studentai> StudentuInfo;
    while (pradinis != "1" && pradinis != "0") {
        std::cout << "Ivestis neteisinga, bandykite dar karta ivesdami 1 ar 0" << std::endl;
        std::cin >> pradinis;
    }
    if (pradinis == "1") {
        std::cout << "Ar norite generuoti tekstinius failus? (taip ar ne)" << std::endl;
        std::cin >> generate;
        while (generate != "taip" && generate != "ne") {
            std::cout << "Ivestis neteisinga, bandykite dar karta ivesdami taip arba ne" << std::endl;
            std::cin >> generate;
        }
        if (generate == "taip") {
            if (fileExists("10.txt") && fileExists("10neislaike.txt")) {
            		auto start = std::chrono::high_resolution_clock::now();
                std::string pav;
                std::cout << "Failai jau egzistuoja" << std::endl;
                std::cout << "Pradedami skaitymai is failu" << std::endl;
                for (int i = 1; i <= 5; i++) {
                    std::stringstream ss;
                    ss << std::round(pow(10, i));
                    std::string pav = ss.str() + ".txt";
                    std::cout << pav << std::endl;
                    Skaitymas(StudentuInfo, pav);
                }
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff = end - start;
        std::cout << "Failu skaitymo laikas: " << diff.count() << " s." << std::endl;
            } else {
            		auto start1 = std::chrono::high_resolution_clock::now();
                for (int z = 1; z <= 5; z++) {
                    Generuoti(std::round(pow(10, z)));
                    StudentuInfo.clear();
                }
        auto end1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff1 = end1 - start1;
        std::cout << "Failu generavimo laikas: " << diff1.count() << " s." << std::endl;
            }
        }
        if (generate == "ne") {
        	auto start2 = std::chrono::high_resolution_clock::now();
            Skaitymas(StudentuInfo, "kursiokai.txt");
            Spausdinti(StudentuInfo);
         auto end2 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff2 = end2 - start2;
        std::cout << "Programos laikas: " << diff2.count() << " s." << std::endl;
        }
    } else {
        int studSkaic;
        bool valid = true;
        std::string tekstas;
        std::cout << "Iveskite studentu skaiciu" << std::endl;
        std::cin.sync();
        while (valid) {
            valid = false;
            try {
                studSkaic = TikrintiSkaicius(tekstas);
            }
            catch (const std::out_of_range &e) {
                std::cout << "Sis skaicius yra per didelis, bandykite dar karta" << std::endl;
                valid = true;

            }
        }
        StudentuInfo.reserve(studSkaic);

        for (int i = 0; i < studSkaic; i++) StudentuInfo.push_back(Informacija());

        std::string tipas;
        std::cout << "Pasirinkite kokio rezultato norite - Vid ar Med" << std::endl;
        std::cin >> tipas;

        while (tipas != "Vid" && tipas != "Med") {
            std::cout << "Ivestis neteisinga, bandykite dar karta" << std::endl;
            std::cin >> tipas;
        }
        auto start1 = std::chrono::high_resolution_clock::now();
        Spausdinti(StudentuInfo, tipas, studSkaic);
          auto end1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff1 = end1 - start1;
        std::cout << "Programos laikas: " << diff1.count() << " s." << std::endl;
    }

}
