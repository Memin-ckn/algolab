#ifndef MINHESAP_H
#define MINHESAP_H

#include <iostream>
#include <iomanip>

void minHesap()
{
    float x, y, z;
    float min = INT_MAX;

    std::cout << "3 tane ondalıklı sayı giriniz. " << std::endl;
    std::cin >> x >> y >> z;

    if (x < min)
    {
        min = x;
    }
    if (y < min)
    {
        min = y;
    }
    if (z < min)
    {
        min = z;
    }

    std::cout << "Bu 3 sayıdan en küçüğü: " << std::fixed << std::setprecision(2) << min << std::endl;
}

#endif // !MINHESAP_H
