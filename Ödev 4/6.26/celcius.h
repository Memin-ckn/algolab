#ifndef CELCIUS_H
#define CELCIUS_H

#include <iostream>

void celcius(float f)
{
    std::cout << f << "°F = " << (f - 32) * 5 / 9 << "°C    " << std::endl;
}

#endif // !CELCIUS_H
