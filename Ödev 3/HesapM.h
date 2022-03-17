#ifndef HESAPM_H
#define HESAPM_H

#include <iostream>

class HesapM
{
private:
    double a, b;

public:
    void sayiAl()
    {
        std::cout << "1. Sayıyı giriniz: " << std::endl;
        std::cin >> a;
        std::cout << "2. Sayıyı giriniz: " << std::endl;
        std::cin >> b;
    }
    double toplama()
    {
        return a + b;
    }
    double cikarma()
    {
        return a - b;
    }
    double carpma()
    {
        return a * b;
    }
    double bolme()
    {
        return a / b;
    }
};

#endif // !HESAPM_H