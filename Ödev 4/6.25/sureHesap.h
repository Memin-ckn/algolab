#ifndef SUREHESAP_H
#define SUREHESAP_H

/*
6.25 (Saniye Hesabı) girdi olarak zamanı üç tamsayı halinde (saat, dakika, saniye) alan ve saat 00.00'dan itibaren kaç saniye geçtiğini bulan bir fonksiyon yazınız.
Bu fonksiyonu, iki zaman arasındaki süreyi saniye cinsinden bulacak şekilde kullanınız.
*/

#include <iostream>
#include <cmath>

void sureHesap()
{

    int saat, dakika, saniye;
    int saat2, dakika2, saniye2;
    int secim;

    std::cout << "Zaman farkı için 1, 00.00'dan itibaren için 2 girin. " << std::endl;
    std::cin >> secim;

    std::cout << "Saat kaç? (saat, dakika, saniye) " << std::endl;
    do
    {
        std::cin >> saat;
        if (!(saat < 24 && saat >= 0))
        {
            std::cout << "Saati hatalı girdiniz. Lütfen tekrar girin. " << std::endl;
        }

    } while (!(saat < 24 && saat >= 0));

    do
    {
        std::cin >> dakika;
        if (!(dakika <= 60 && dakika >= 0))
        {
            std::cout << "Dakikayı hatalı girdiniz. Lütfen tekrar girin. " << std::endl;
        }

    } while (!(dakika <= 60 && dakika >= 0));

    do
    {
        std::cin >> saniye;
        if (!(saniye <= 60 && saniye >= 0))
        {
            std::cout << "Saniyeyi hatalı girdiniz. Lütfen tekrar girin. " << std::endl;
        }

    } while (!(saniye <= 60 && saniye >= 0));

    switch (secim)
    {
    case 1:

        std::cout << "2. Saat kaç? (saat, dakika, saniye) " << std::endl;
        do
        {
            std::cin >> saat2;
            if (!(saat2 < 24 && saat2 >= 0))
            {
                std::cout << "Saati hatalı girdiniz. Lütfen tekrar girin. " << std::endl;
            }

        } while (!(saat2 < 24 && saat2 >= 0));

        do
        {
            std::cin >> dakika2;
            if (!(dakika2 <= 60 && dakika2 >= 0))
            {
                std::cout << "Dakikayı hatalı girdiniz. Lütfen tekrar girin. " << std::endl;
            }

        } while (!(dakika2 <= 60 && dakika2 >= 0));

        do
        {
            std::cin >> saniye2;
            if (!(saniye2 <= 60 && saniye2 >= 0))
            {
                std::cout << "Saniyeyi hatalı girdiniz. Lütfen tekrar girin. " << std::endl;
            }

        } while (!(saniye2 <= 60 && saniye2 >= 0));

        std::cout << "Saat " << saat << ":" << dakika << ":" << saniye << "'den itibaren" << (abs(saat - saat2) * 60 * 60) + (abs(dakika - dakika2) * 60) + (abs(saniye - saniye2)) << " saniye geçmiş." << std::endl;

        break;
    case 2:
        std::cout << "Saat 00.00'dan itibaren " << (saat * 60 * 60) + (dakika * 60) + saniye << " saniye geçmiş." << std::endl;
        break;

    default:
        std::cout << "Hatalı giriş yapıldı. " << std::endl;
        break;
    }
}

#endif // !SUREHESAP_H