#ifndef TABLO_H
#define TABLO_H

#include <iostream>
#include "celcius.h"
#include "fahrenheit.h"

void tablo()
{
    for (int i = 0; i <= 212; i++)
    {
        if (i >= 0 && i < 32)
        {
            fahrenheit(i);
        }
        else if (i >= 32 && i <= 100)
        {
            fahrenheit(i);
            celcius(i);
        }
        else if (i > 100 && i <= 212)
        {
            celcius(i);
        }

        std::cout << std::endl;
    }
}

#endif // !TABLO_H
