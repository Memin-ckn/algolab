#ifndef HESAPLAMA_H
#define HESAPLAMA_H

#include <iostream>
#include "HesapM.h"

void hesaplama()
{

    HesapM c;
    int secim;

    std::cout << " Toplama için: 1\n Çıkarma için: 2\n Çarpma için: 3\n Bölme için 4\n Çıkış için: 0" << std::endl;

    do
    {
        std::cout << "Seçiminizi giriniz: " << std::endl;
        std::cin >> secim;

        switch (secim)
        {
        case 1:
            c.sayiAl();
            std::cout << "Sonuç: " << c.toplama() << std::endl;
            break;
        case 2:
            c.sayiAl();
            std::cout << "Sonuç: " << c.cikarma() << std::endl;
            break;
        case 3:
            c.sayiAl();
            std::cout << "Sonuç: " << c.carpma() << std::endl;
            break;
        case 4:
            c.sayiAl();
            std::cout << "Sonuç: " << c.bolme() << std::endl;
            break;

        case 0:
            std::cout << "Başarıyla çıkış yapıldı. " << std::endl;
            break;

        default:
            std::cout << "Hatalı giriş yapıldı. Çıkış yapılıyor... " << std::endl;
            break;
        }
    } while (secim >= 1 && secim <= 4);
}
#endif // !HESAPLAMA_H