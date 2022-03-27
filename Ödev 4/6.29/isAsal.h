#ifndef ISASAL_H
#define ISASAL_H

#include <math.h>

bool isAsal(int sayi)
{
    int bolen = 0;

    for (size_t i = 2; i <= sqrt(sayi); i++)
    {

        if (sayi % i == 0)
        {
            bolen++;
        }
    }

    if (bolen == 0)
    {
        // std::cout << sayi << " bir asal sayıdır." << std::endl;
        return 1;
    }
    else
    {
        // std::cout << sayi << " bir asal sayı değildir." << std::endl;
        return 0;
    }
}

#endif // !ISASAL_H
