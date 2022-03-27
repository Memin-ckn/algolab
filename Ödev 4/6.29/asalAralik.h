#ifndef ASALARALIK_H
#define ASALARALIK_H

#include "isAsal.h"
#include <iostream>

void asalAralik()
{
    for (size_t i = 2; i < 10000; i++)
    {

        if (isAsal(i))
        {
            std::cout << i << " bir asal sayıdır." << std::endl;
        }
    }
}

#endif // !ASALARALIK_H
