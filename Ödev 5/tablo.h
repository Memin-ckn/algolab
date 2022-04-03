#ifndef TABLO_H
#define TABLO_H

#include <iostream>

void tablo()
{
    std::cout << std::setw(11) << "G" << std::setw(5) << "M" << std::setw(5) << "B" << std::setw(5) << "A" << std::setw(5) << "P" << std::endl; // Üst sıra 

    for (size_t i = 0; i < 4; i++)
    {
        std::cout << std::setw(5) << takimlar[i] << std::setw(5); // Alt alta takım isimleri

        for (size_t j = 0; j < 5; j++)
        {
            std::cout << std::setw(5) << puan[i][j]; // Takımların puanları
        }
        std::cout << std::endl;
    }
}

#endif // !TABLO_H
